# State Machine
---

## Introducation

为了更加规范的实现状态机，我将使用两种结构来完成。

1. 用多返回值（状态值）的函数，通过主循环和switch实现
2. 使用Python的smach思想，定好状态机和event的模板，
再对具体事件进行构造,函数中对关键信号量进行监控,对状态函数切换更加清晰（虽然复杂一些）

---

