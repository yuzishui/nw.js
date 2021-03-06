#ifndef NW_API_CLIPBOARD_API_H_
#define NW_API_CLIPBOARD_API_H_

#include <vector>

#include "extensions/browser/extension_function.h"

namespace extensions {

class NwClipboardGetSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;

 protected:
  ~NwClipboardGetSyncFunction() override;


  DECLARE_EXTENSION_FUNCTION("nw.Clipboard.getSync", UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardGetSyncFunction);
};

class NwClipboardSetSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;

 protected:
  ~NwClipboardSetSyncFunction() override;

  DECLARE_EXTENSION_FUNCTION("nw.Clipboard.setSync", UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetSyncFunction);
};

class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;

 protected:
  ~NwClipboardClearSyncFunction() override;

  DECLARE_EXTENSION_FUNCTION("nw.Clipboard.clearSync", UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};

} // namespace extensions
#endif
