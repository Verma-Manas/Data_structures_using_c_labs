//IMPLEMENT LIST USING ARRAY AND DEVELOP FUNCTIONS TO PERFORM INSERTION, DELETION AND LINEAR SEARCH.

#include<stdio.h>
int search(int,int,int);
main()
{
    int list[100],i,size,ele1,pos1,item,update,pos2,pos3,n,find,result;
                               //variable declaration
    printf("Enter the number of the elements in the list:\n");
    scanf("%d",&size);
    printf("Enter the elements of the list:\n");

    for(i=0;i<size;i++)       //writing elements in the list
    {
        scanf("%d",&list[i]);
    }
    printf("List is:\n");

    for(i=0;i<size;i++)       //reading elements in the list
    {
        printf("%d\n",list[i]);
    }

            //INSERTION
    printf("Enter the element you want to insert: ");
    scanf("%d",&ele1);
    printf("Enter the position of the element u want to insert:");
    scanf("%d",&pos1);
    size++;

    // shift elements forward
    for(i=size-1;i>=pos1;i--)
        {
        list[i]=list[i-1];
        }
    list[pos1-1] = ele1;

    // print the updated array
    for (i = 0; i < size; i++)
        {
        printf("%d ", list[i]);
        printf("\n");
        }

    //UPDATION

    printf("Enter element to update:\t");
    scanf("%d",&update);
    printf("Enter the position:\t");
    scanf("%d",&pos2);
    for(i=0;i<size;i++)
    {
        if(pos2==i)
            {list[i-1]=update;}
    }
     for(i=0;i<size;i++)
    {
        printf("%d",list[i]);
        printf("\n");
    }
    //TRANSVERSE
    printf("\n Transversing list:\n");
    for(i=0;i<size;i++)
    {
        printf("list[%d]=%d",i,list[i]);
        printf("\n");
    }
    //deletion
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos3);

    if ( pos3 >= size+1 )
    printf("Deletion not possible.\n");

    else
    {
        for (i=pos3-1;i<size-1;i++)
        list[i]=list[i+1];

        printf("Resultant array is\n");

        for(i=0;i<size-1;i++)
        printf("%d\n",list[i]);
    }
    // LINEAR SEARCH

    int search(int list[], int n, int find)
    {
        for (int i = 0; i < n; i++)
            if (list[i] == find)
            return i;
        return -1;
        }
        printf("Which element to search?\t");
        scanf("%d",&find);
        n = sizeof(list) / sizeof(list[0]);
        result = search(list, n, find);
        (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);

}
