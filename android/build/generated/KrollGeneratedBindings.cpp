/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf -L C++ -E -t C:/cygwin64/tmp/SUN/acra-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "C:/cygwin64/tmp/SUN/acra-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.acra.TiacraModule.h"


#line 13 "C:/cygwin64/tmp/SUN/acra-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class TiacraBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiacraBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TiacraBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 20,
      MAX_WORD_LENGTH = 20,
      MIN_HASH_VALUE = 20,
      MAX_HASH_VALUE = 20
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 15 "C:/cygwin64/tmp/SUN/acra-generated/KrollGeneratedBindings.gperf"
      {"ti.acra.TiacraModule", ::ti::acra::TiacraModule::bindProxy, ::ti::acra::TiacraModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "C:/cygwin64/tmp/SUN/acra-generated/KrollGeneratedBindings.gperf"

