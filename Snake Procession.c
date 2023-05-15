#include <stdlib.h>
#include <stdio.h>

int main()
{
    int testCaseNum = 0;
    char* pLineBuf = NULL;
    int bufCnt = 0, headStart = 0, errorFlg = 0;

    scanf("%d", &testCaseNum);

    while(testCaseNum > 0)
    {
        scanf("%d", &bufCnt);

        pLineBuf = (char*)malloc(bufCnt+1);
        memset(pLineBuf, 0x00, bufCnt + 1);

        scanf("%s", pLineBuf);
        int chkIndex = 0;

        for(chkIndex = 0; chkIndex < bufCnt; chkIndex++)
        {
            switch(*(pLineBuf + chkIndex) )
            {
            case '.':
                break;
            case 'H':
                if(headStart)
                {
                    errorFlg = 1;
                }
                else
                {
                    headStart = 1;
                }
                break;
            case 'T':
                if(headStart)
                {
                    headStart = 0;
                }
                else
                {
                    errorFlg = 1;
                }
                break;
            default:
                break;
            }

            if(errorFlg == 1)
                break;
        }

        if(errorFlg == 1)
        {
            printf("Invalid\n");
        }
        else
        {
            if(headStart)
            {
                printf("Invalid\n");
            }
            else
            {
                printf("Valid\n");
            }
        }

        errorFlg = 0;
        headStart = 0;
        bufCnt = 0;
        testCaseNum--;
        free(pLineBuf);
    }


    return 0;
}
