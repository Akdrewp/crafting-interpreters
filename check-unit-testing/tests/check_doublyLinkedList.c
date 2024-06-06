#include <stdlib.h>
#include <check.h>
#include "../src/doublyLinkedList.h"

START_TEST(test_doublyLinkedList_create)
{
    Node *head = createDoublyLinkedList();

    int headInt = head->data;
    int listSize = size(head);

    ck_assert_int_eq(0, headInt);
    ck_assert_ptr_null(head->next);
    ck_assert_ptr_null(head->prev);
    ck_assert_int_eq(1, listSize);
}
END_TEST

START_TEST(test_doublyLinkedList_add)
{
    Node *head = createDoublyLinkedList();
    add(1, head);
    add(2, head);
    add(3, head);

    int listSize = size(head);

    ck_assert_int_eq(4, listSize);
    ck_assert_int_eq(2, get(2, head));
}
END_TEST

Suite *money_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("doublyLinkedList");

    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_doublyLinkedList_create);
    tcase_add_test(tc_core, test_doublyLinkedList_add);
    suite_add_tcase(s, tc_core);

    return s;

}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = money_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}