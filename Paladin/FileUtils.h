#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <Entry.h>
#include <Message.h>

class Project;

void				FindAndOpenFile(BMessage *msg);
entry_ref			FindFile(entry_ref folder,const char *name);
entry_ref			FindProject(entry_ref folder,const char *name);

void				InitFileTypes(void);

void				SendToEditor(BMessage &msg, BMessage *reply = NULL);

#define EDITOR_SIGNATURE "application/x-vnd.dw-PalEdit"

#endif
