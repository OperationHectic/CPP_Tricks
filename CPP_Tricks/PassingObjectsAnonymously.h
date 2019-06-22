/* This file shows how to pass a Struct or a Class object anonymously to a function or method*/

struct MyStruct
{
	int a;
	int b;
};

class Plane
{
private:
	int wing_span;
	int weight;
	int seats;

public:
	Plane(int wing_span, int weight, int seats) : wing_span(wing_span), weight(weight), seats(seats) {}
	int get_wing_span() const { return wing_span; }
	int get_weight() const { return weight; }
	int get_seats() const { return seats; }
};

void test_func(MyStruct s);
void cpu_cycles();
Plane create_plane(Plane plane);

void test_function()
{
	MyStruct my_struct;
	my_struct.a = 45;
	my_struct.b = 56;
	test_func({ 45, 56 });
	Plane plane = create_plane(Plane(500, 10000, 400));
}

Plane create_plane(Plane plane)
{
	std::cout << plane.get_wing_span() << "\n";
	std::cout << plane.get_weight() << "\n";
	std::cout << plane.get_seats() << "\n";
	return plane;
}