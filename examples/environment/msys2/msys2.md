# MSYS2 配置 Windows C++ 环境

## Clang64

- 安装软件

```sh
# 更新软件包数据库
pacman -Syu

# 安装 CMake
pacman -S mingw-w64-clang-x86_64-cmake

# 安装 Clang 工具链
pacman -S mingw-w64-clang-x86_64-clang
pacman -S mingw-w64-clang-x86_64-clang-tools-extra
pacman -S mingw-w64-clang-x86_64-lldb

# 安装 OpenCV
pacman -S mingw-w64-clang-x86_64-opencv
# 安装 Qt Creator (方便调用 cv::imshow 函数)
pacman -S mingw-w64-clang-x86_64-qt-creator
```

- 将 Clang64 子目录 `E:\ProgramData\msys64\clang64\bin` 添加到 Windows 环境变量中，方便后续使用编译环境

![alt text](image/clang64_environment_variable.png)


- 将 MSYS2 Clang64 终端配置信息添加到 Visual Studio Code settings.json 中

```json
{
    "terminal.integrated.profiles.windows": {
        "MSYS2 Clang64": {
            "path": "cmd.exe",
            "args": [
                "/c",
                "E:\\ProgramData\\msys64\\msys2_shell.cmd -defterm -here -no-start -clang64"
            ]
        }
    }
}
```