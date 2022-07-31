---
id: n2vbv
name: c
file_version: 1.0.2
app_version: 0.9.3-0
file_blobs:
  main.c: 0504ea4cb2d26d15d4c8f1f930cad6e6127fbb3e
---

<!-- NOTE-swimm-snippet: the lines below link your snippet to Swimm -->
### 📄 main.c
```c
⬜ 40             memory_error("Memory allocation failed\n");
⬜ 41             exit(0);
⬜ 42         }
🟩 43         srand(time(NULL)); /* setting random seed */
🟩 44         printf("Sudoku\n------\n");
🟩 45         printf("Enter your command:\n");
🟩 46         while (fgets(command, MAX_CMD_SIZE + 2, stdin) != NULL) {
🟩 47             if (!strchr(command, '\n')) { /* command contains more than 256 chars */
🟩 48                 while (!strchr(command, '\n')  && fgets(command, MAX_CMD_SIZE + 2, stdin)); /* cleaning buffer */
🟩 49                 invalidCmd = true;
🟩 50                 printf(INVALID_ERROR);
🟩 51     
🟩 52             }
⬜ 53             argsCounter = parseCommand(command, parsedCommand);
⬜ 54             tmpBoard = NULL;
⬜ 55             if (parsedCommand[0] == NULL) {/* Handles blank line */
```

<br/>

This file was generated by Swimm. [Click here to view it in the app](https://swimm-web-app.web.app/repos/Z2l0aHViJTNBJTNBdGVzdGFwMTklM0ElM0Fyb3RlbWJhcjM=/docs/n2vbv).