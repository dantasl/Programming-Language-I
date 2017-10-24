#ifndef _STACK_H_
#define _STACK_H_

#include <cstdlib>
#include <memory>

namespace sc
{
	template < typename T >
	class stack
	{
		public:
			/**
			 * @brief Defining aliases of my stack.
			 */
			using size_type = size_t;
			using value_type = T;
			const static size_type DEFAULT_SIZE = 1;
			using reference = T &;
			using pointer = T *;

		private:
			/**
			 * @brief Defining attributes of my class Stack.
			 * For more information about what they do an why they are here
			 * check the parameterized constructor stack() for reference.
			 */
			size_type m_capacity;
			size_type m_size;
			pointer m_storage;

		public:			
			/**
			 * @brief Parameterized constructor.
			 * @param m_capacity Represents the fisical size of the stack, i.e. how many elements the
			 * stack can store. If the user provides a value (in most cases he will), initializes
			 * m_capacity with his parameter. If not, initializes with const DEFAULT_SIZE of 1.
			 * The attribute m_size represents the logical size of the stack, i.e. how many elements there
			 * are on this stack. At the beginning, since the stack is empty, size is 0. With this,
			 * is also possible to know which element is the stack's top, i.e. the last added element.
			 * And finally m_storage, a pointer that stores the stack's elements addresses.
			 */
			stack( size_type capacity = DEFAULT_SIZE )
				: m_capacity( capacity )
				, m_size( 0 )
				, m_storage( new value_type[ m_capacity ] )
				{ /* empty */ }

			/**
			 * @brief Destructor for stack. Free memory usage for m_storage.
			 */
			~stack()
			{
				delete [] m_storage;
			}

			/**
			 * @brief This function receives an element and checks if the stack is full. If so, outputs
			 * error message to user. Otherwise, adds that element on the stack, updates m_top and
			 * increments m_size.
			 * @param v New element to be added on this stack.  
			 */						
			void push (const reference v )
			{
				if( full() )
					throw std::out_of_range("Cannot add new elements, stack is currently full." );
				m_storage[ m_size ++ ] = v;
			}

			/**
			 * @brief This function checks if the stack is empty or not. If it is, throws exceptions.
			 * If not, returns to user the top element of the stack.
			 * @return The top element of the stack.
			 */
			value_type top ( void ) const
			{
				if ( empty() )
					throw std::out_of_range("Cannot access top element of an empty stack.");
				return m_storage[ ( m_size - 1 ) ];
			}

			/**
			 * @brief This function removes all elements from the stack by simply reseting the m_size.
			 */
			void clear ( void ) { m_size = 0; }
			
			/**
			 * @brief This function acts a getter for the attribute m_size.
			 * @return Attribute m_size.
			 */
			size_type size ( void ) { return m_size; }

			/**
			 * @brief This function removes the last added element from the stack and decrements to
			 * the new m_size.
			 */
			void pop ( void ) 
			{
				if ( empty() )
					throw std::out_of_range("You cannot pop last added element from an empty stack!");
				--m_size;
			}			

			/**
			 * @brief This function checks if the stack is currently full. For this, is enough to
			 * check if the m_capacity (size_type that tells which is the fisical size of the stack)
			 * is equal to the m_size (logical size of the stack).
			 * @return true, If so.
			 * @return false, Otherwise.
			 */
			bool full ( void ) const { return m_capacity == m_size; }

			/**
			 * @brief This function checks if the stack is currently empty. For this, is enough to
			 * check if m_size is equal to 0, the initial value.
			 * @return true if m_size is equal to 0.
			 * @return false, otherwise.
			 */			
			bool empty ( void ) const { return m_size == 0; }
	};
}

#endif