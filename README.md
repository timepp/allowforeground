allowforeground
===============

A very simple program that allow one immdiately "bing-to-top" operation

story
=====

Sometimes you want to bring a background program to foreground and get input
focus.  In most cases it will success. however, it will fail in modern Windows
system if it is not triggered by your "explicit intention" (guessed by
Windows). This is not a bug but a protection mechanism to not let crazy programs
annoying the user. see
[MSDN](http://msdn.microsoft.com/en-us/library/windows/desktop/ms632668%28v=vs.85%29.aspx)
for details.

Following is some cases and the corresponding results.

1. [SUCCESS] you click the background window by mouse
2. [SUCCESS] you switch to the background by "atl+tab"
3. [FAIL]    you want to switch to it programmingly (such as in hoekey/autoit)
4. [FAIL]    the background program want to bring to front by itself
5. [FAIL] in some script code, one foreground tool want to bring it to front but
   failed

*allowforeground is only aim to solve case 5*.  In that case, there is a bug in
the tool, or the failure is a by-design behavior of the tool.  `allowforeground`
let you solve this without changing the tool.

The working source code is extremely simple so that I can paste it here:

```C
#include <Windows.h>
int CALLBACK wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    return AllowSetForegroundWindow(ASFW_ANY);
}
```

usage
=====

Call `allowforeground` in your bat file, script, etc. The next set-foreground
operation will success.


download
========

Download the 1K zip file from
[here](http://timepp.github.io/product/allowforeground/allowforeground.zip)

