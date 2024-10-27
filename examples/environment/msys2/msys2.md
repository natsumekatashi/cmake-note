# MSYS2 配置 Windows C++ 环境

## Clang64

```sh
# 更新软件包数据库。
pacman -Syu

# 安装 CMake。
pacman -S mingw-w64-clang-x86_64-cmake

# 安装 Clang 工具链。
pacman -S mingw-w64-clang-x86_64-clang
pacman -S mingw-w64-clang-x86_64-clang-tools-extra
```

```json
// 参考下列格式，将 MSYS2 Clang64 终端配置信息添加到 Visual Studio settings.json 中。
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

