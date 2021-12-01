#include "pch.h"
#include "../Queue/TQueue.h"

TEST(TQueue, Can_create_queue_with_positive_size) 
{
	EXPECT_NO_THROW(TQueue<int> a(1));
}

TEST(TQueue, Can_not_create_queue_with_negative_size)
{
	EXPECT_ANY_THROW(TQueue<int> a(-1));
}

TEST(TQueue, Queue_is_empty_after_creating)
{
	TQueue<int> a(3);
	EXPECT_TRUE(a.IsEmpty());
}

TEST(TQueue, Queue_is_not_empty_after_adding_an_element)
{
	TQueue<int> a(3);
	a.Push(0);
	EXPECT_TRUE(!a.IsEmpty());
}

TEST(TQueue, Queue_is_empty_after_extracting_last_element)
{
	TQueue<int> a(3);
	a.Push(0);
	a.Pop();
	EXPECT_TRUE(a.IsEmpty());
}

TEST(TQueue, Queue_is_full_when_it_has_not_memory_for_new_element)
{
	TQueue<int> a(3);
	a.Push(0), a.Push(0), a.Push(0);
	EXPECT_TRUE(a.IsFull());
}

TEST(TQueue, Queue_is_not_full_when_it_has_memory_for_new_element)
{
	TQueue<int> a(4);
	a.Push(0), a.Push(0), a.Push(0);
	EXPECT_TRUE(!a.IsFull());
}

TEST(TQueue, Correct_working_comparators)
{
	TQueue<int> a(4);
	a.Push(0), a.Push(1), a.Push(2);
	a.Pop(), a.Pop(), a.Push(3);
	TQueue<int> b(5);
	b.Push(2), b.Push(3);
	EXPECT_TRUE(b == a);
	EXPECT_FALSE(b != a);
}

TEST(TQueue, Copyed_queue_is_equal_original_queue)
{
	TQueue<int> a(4);
	a.Push(0), a.Push(1), a.Push(2);
	TQueue<int> b(a);
	EXPECT_TRUE(b == a);
}

TEST(TQueue, Correct_working_assign_operator)
{
	TQueue<int> a(4);
	a.Push(0), a.Push(1), a.Push(2);
	TQueue<int> b(1);
	b = a;
	EXPECT_TRUE(b == a);
}

TEST(TQueue, Can_not_extract_element_from_empty_queue)
{
	TQueue<int> a(3);
	ASSERT_ANY_THROW(a.Pop());
}

TEST(TQueue, Can_not_put_element_to_full_queue)
{
	TQueue<int> a(3);
	a.Push(0), a.Push(1), a.Push(2);
	ASSERT_ANY_THROW(a.Push(3));
}

TEST(TQueue, Queues_have_own_memory)
{
	TQueue<int> a(3);
	a.Push(0), a.Push(1), a.Push(2);
	TQueue<int> b(3);
	b = a;
	b.Pop(); b.Push(3);
	ASSERT_TRUE(a != b);
}

TEST(TQueue, Queue_is_empty_after_clearing)
{
	TQueue<int> a(3);
	a.Push(0), a.Push(1), a.Push(2);
	a.Clear();
	ASSERT_TRUE(a.IsEmpty());
}
