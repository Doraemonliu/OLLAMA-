#include <stdio.h>
#include <stdlib.h>

void execute_powershell_command(const char *command) {
    // ����PowerShell����������
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "powershell.exe -Command \"%s\"", command);
    system(cmd);
}

int main() {
    int choice;
    printf("��ѡ��Ҫִ�е�PowerShell����:\n");
    printf("Github��ַhttps://github.com/Doraemonliu/OLLAMA-(star�����Ŀ��ͬѧ����ƾ���ͼ��̨���C���ԡ�c++��Java���ſκﲩʿ�γ�)\n");
    printf("1. ��ð���\n");
    printf("2. ��װ������������ǧ��7Bģ��\n");
    printf("3. ��װ������MetaLlama3ģ��\n");
    printf("4. ��װ������googleGEMMA2ģ��\n");
    printf("5. �Ƴ�������ǧ��7Bģ��\n");
    printf("6. �Ƴ�MetaLlama3ģ��\n");
    printf("7. �Ƴ�googleGEMMA2ģ��\n");

    printf("8. �˳�\n");
    printf("����������ѡ��: ");
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
            printf("�˳�����\n");
            return 0;
        default:
            printf("��Ч��ѡ��\n");
            break;
    }

    return 0;
}






