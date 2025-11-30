#include <stdio.h>

int main()
{
    int n, i;
    float price, final_price;
    float total_before = 0, total_after = 0;
    char category;

    // 1. قراءة عدد المنتجات
    printf("Enter number of products: ");
    scanf("%d", &n);

    // 2. حلقة التكرار لكل منتج
    for (i = 1; i <= n; i++)
    {
        printf("\nProduct %d:\n", i);

        printf("Price: ");
        scanf("%f", &price);

        printf("Category (A, B, C): ");
        // ملاحظة: المسافة قبل %c ضرورية لتجاهل ضغطة زر Enter السابقة
        scanf(" %c", &category);

        // 3. رسالة الفئة باستخدام switch
        switch (category)
        {
        case 'A':
            printf("high category\n");
            break;
        case 'B':
            printf("medium category\n");
            break;
        case 'C':
            printf("basic category\n");
            break;
        default:
            printf("Unknown category\n");
        }

        // 4. حساب الخصم باستخدام if
        if (category == 'A')
        {
            final_price = price * 0.90; // خصم 10%
        }
        else if (category == 'B')
        {
            final_price = price * 0.95; // خصم 5%
        }
        else
        {
            final_price = price; // لا يوجد خصم
        }

        // تجميع المجاميع
        total_before = total_before + price;
        total_after = total_after + final_price;
    }

    // 5. الطباعة النهائية
    printf("\n--- Result ---\n");
    printf("Total price before discount: %.2f\n", total_before);
    printf("Total price after discount: %.2f\n", total_after);

    return 0;
}