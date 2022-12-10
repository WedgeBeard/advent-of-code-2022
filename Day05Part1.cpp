#include "Day05Part1.h"

void Day05Part1::CalculateTopCrates(FileReader fileReader)
{
	string topOfStacks;
	vector<stack<char>> stacks;

	//stacks = InitializeTestStack();
	stacks = InitializeStack();
	
	vector<StackMove> moves = fileReader.GetStackMoves("day05Part1data.txt");

	for (size_t currMove = 0; currMove < moves.size(); currMove++)
	{
		int fromStack = moves[currMove].from -1;
		int toStack = moves[currMove].to -1;
		int quantity = moves[currMove].quantity;

		for (size_t currIndex = 0; currIndex < quantity; currIndex++)
		{
			stacks[toStack].push(stacks[fromStack].top());
			stacks[fromStack].pop();
		}
	}

	for (size_t i = 0; i < stacks.size(); i++)
	{
		topOfStacks += (stacks[i].top());
	}
	
	cout << "DAY 05 PART 1 === Tops of all stacks: " << topOfStacks << endl;
}

vector<stack<char>> Day05Part1::InitializeTestStack()
{
	vector<stack<char>> stacks;

	stack<char> stack1;
	stack<char> stack2;
	stack<char> stack3;

	stack1.push('Z');
	stack1.push('N');

	stack2.push('M');
	stack2.push('C');
	stack2.push('D');

	stack3.push('P');

	stacks.push_back(stack<char>(stack1));
	stacks.push_back(stack<char>(stack2));
	stacks.push_back(stack<char>(stack3));

	return stacks;
}

vector<stack<char>> Day05Part1::InitializeStack()
{
	vector<stack<char>> stacks;

	stack<char> stack1;
	stack<char> stack2;
	stack<char> stack3;
	stack<char> stack4;
	stack<char> stack5;
	stack<char> stack6;
	stack<char> stack7;
	stack<char> stack8;
	stack<char> stack9;

	stack1.push('H');
	stack1.push('T');
	stack1.push('Z');
	stack1.push('D');

	stack2.push('Q');
	stack2.push('R');
	stack2.push('W');
	stack2.push('T');
	stack2.push('G');
	stack2.push('C');
	stack2.push('S');

	stack3.push('P');
	stack3.push('B');
	stack3.push('F');
	stack3.push('Q');
	stack3.push('N');
	stack3.push('R');
	stack3.push('C');
	stack3.push('H');
	
	stack4.push('L');
	stack4.push('C');
	stack4.push('N');
	stack4.push('F');
	stack4.push('H');
	stack4.push('Z');

	stack5.push('G');
	stack5.push('L');
	stack5.push('F');
	stack5.push('Q');
	stack5.push('S');
	
	stack6.push('V');
	stack6.push('P');
	stack6.push('W');
	stack6.push('Z');
	stack6.push('B');
	stack6.push('R');
	stack6.push('C');
	stack6.push('S');
	
	stack7.push('Z');
	stack7.push('F');
	stack7.push('J');

	stack8.push('D');
	stack8.push('L');
	stack8.push('V');
	stack8.push('Z');
	stack8.push('R');
	stack8.push('H');
	stack8.push('Q');

	stack9.push('B');
	stack9.push('H');
	stack9.push('G');
	stack9.push('N');
	stack9.push('F');
	stack9.push('Z');
	stack9.push('L');
	stack9.push('D');

	stacks.push_back(stack<char>(stack1));
	stacks.push_back(stack<char>(stack2));
	stacks.push_back(stack<char>(stack3));
	stacks.push_back(stack<char>(stack4));
	stacks.push_back(stack<char>(stack5));
	stacks.push_back(stack<char>(stack6));
	stacks.push_back(stack<char>(stack7));
	stacks.push_back(stack<char>(stack8));
	stacks.push_back(stack<char>(stack9));

	return stacks;
}
