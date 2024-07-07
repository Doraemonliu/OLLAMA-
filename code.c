#include <stdio.h>
#include <stdlib.h>

void execute_powershell_command(const char *command) {
    // 调用PowerShell并传递命令
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "powershell.exe -Command \"%s\"", command);
    system(cmd);
}

int main() {
    int choice;
    printf("请选择要执行的PowerShell命令:\n");
    printf("Github地址https://github.com/Doraemonliu/OLLAMA-(star这个项目的同学可以凭借截图后台获得C语言、c++、Java三门课猴博士课程)\n");
    printf("1. 获得帮助\n");
    printf("2. 安装或启动阿里云千问7B模型\n");
    printf("3. 安装或启动MetaLlama3模型\n");
    printf("4. 安装或启动googleGEMMA2模型\n");
    printf("5. 移除阿里云千问7B模型\n");
    printf("6. 移除MetaLlama3模型\n");
    printf("7. 移除googleGEMMA2模型\n");

    printf("8. 退出\n");
    printf("请输入数字选择: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("duolachengyu@outlook.com");
            break;
        case 2:
            execute_powershell_command("ollama run qwen2");
            break;
        case 3:
            execute_powershell_command("ollama run llama3");
            break; 
        case 4:
            execute_powershell_command("ollama run gemma2");
            break;
        case 5:
        	execute_powershell_command("ollama rm qwen2");
        	break;
        case 6:
        	execute_powershell_command("ollama rm llama3");
        	break;
        case 7:
        	execute_powershell_command("ollama rm gemma2");
        	break;
        case 8:
            printf("退出程序。\n");
            return 0;
        default:
            printf("无效的选择！\n");
            break;
    }

    return 0;
}






