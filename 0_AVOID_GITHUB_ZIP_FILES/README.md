Github "Download ZIP" button is not supported
=============================================

The "Download ZIP" button on Github has two problems:

1. The archive does not contain Git metadata (.git directory) which
   is needed by ROSE when figuring out the EDG hash, and possibly
   needed by other parts of ROSE also (e.g., its "--version" switch).

2. The ZIP archive contains some broken symbolic links.

We have repeatedly asked GitHub for a way to disable this
button, but they "don't expect it will be implemented any time soon."

BTW, this README lives in a directory whose name causes it to appear
as close as possible to the "Download ZIP" button in the GitHub web
interface.
