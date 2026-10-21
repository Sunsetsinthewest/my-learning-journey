# 我的全栈学习记录

> 以 C++ 打地基，通向全栈开发工程师。记录每一天的学习与产出。

## 关于我

- 计算机专业大一学生
- 正在执行一份 24 个月的全栈学习计划
- 目标：成为能独立完成产品的全栈开发工程师

## 学习进度

| 周次 | 主题 | 状态 |
| --- | --- | --- |
| W01 | 环境与命令行 | 已完成 |
| W02 | Git 与第一个 C++ 程序 | 已完成 |
| W03 | C++ 基础语法 | 已完成 |
| W04 | 控制流 | 已完成 |
| W05 | 函数与引用 | 进行中 |

## 目录结构

```text
.
├── README.md
├── .gitignore
├── cpp/                              所有 C++ 代码
│   ├── hello.cpp                     W01：第一个程序
│   ├── test/
│   │   └── test.cpp                  W02：练习 cin 输入
│   ├── w03/                          W03：C++ 基础语法
│   │   ├── bmi/
│   │   │   └── bmi.cpp               计算 BMI
│   │   └── temperature/
│   │       └── temperature.cpp       摄氏度转华氏度
│   └── w04/                          W04：控制流
│       ├── guess/
│       │   └── guess.cpp             猜数字（自定义范围 + 输入校验）
│       ├── multiply/
│       │   └── multiply.cpp          九九乘法表
│       └── prime/
│           └── prime.cpp             判断素数（支持连续输入）
└── notes/                            所有学习笔记
    └── W01-环境与命令行.md
```

### 两条组织约定

- **`cpp/`** —— 所有可编译运行的代码。结构为 `cpp/<周次>/<程序名>/<程序名>.cpp`。
- **一个程序一个文件夹** —— 每个程序都有自己的 `main` 函数，放在同一目录会被「一次编译多个文件」的工具一起收走，导致 `multiple definition of 'main'`。一个程序独占一个目录，从根上避免这个问题。
- **`notes/`** —— 所有 Markdown 学习笔记，按周命名，例如 `notes/W03-C++基础语法.md`。

## 环境

- 系统：Windows 11
- 编译器：g++ 16.2.0 (w64devkit)
- 编辑器：VS Code
- 终端：Git Bash
- 版本控制：Git 2.55

## 编码约定

所有源文件统一 **UTF-8（无 BOM）**。程序运行时若出现中文乱码，是控制台代码页（Windows 默认 936/GBK）与 UTF-8 不匹配，在程序开头加：

```cpp
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
```

## 联系方式

- GitHub：[@Sunsetsinthewest](https://github.com/Sunsetsinthewest)
