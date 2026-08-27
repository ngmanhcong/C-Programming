#include<stdio.h>
#include <Windows.h>
#define STATUS_SUCCESS 0

typedef struct _MY_ENTRY {
    ULONG Flags;
    PVOID Context;
    struct _MY_ENTRY *Next;
} MY_ENTRY, *PMY_ENTRY;

typedef
NTSTATUS
(*PROCESS_CALLBACK)(
    _Inout_ PMY_ENTRY Entry,
    _In_ ULONG Operation
    );

NTSTATUS
ProcessEntries(
    _Inout_ PMY_ENTRY Head,
    _In_ PROCESS_CALLBACK Callback
)
{
    PMY_ENTRY current = Head;

    while (current != NULL) {

        if ((current->Flags & 0x01) != 0) {

            NTSTATUS status =
                Callback(current, 1);

            if (!NT_SUCCESS(status)) {
                return status;
            }
        }

        current = current->Next;
    }

    return STATUS_SUCCESS;
}