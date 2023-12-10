#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>


void Constructors()
{
	std::cout << std::endl;

	glm::vec3 Point1{ 10.0f, 0.0f, 0.0f };
	glm::vec3 Point2 = glm::vec3(10.0f, 0.0f, 0.0f);
	glm::vec3 Point3 = { 10.0f, 0.0f, 0.0f };

	std::cout << "Point1: " << glm::to_string(Point1) << std::endl;
	std::cout << "Point2: " << glm::to_string(Point2) << std::endl;
	std::cout << "Point3: " << glm::to_string(Point3) << std::endl;
}

void Components()
{
	std::cout << std::endl;

	glm::vec3 Point1{ 10.0f, 10.0f, 0.0f };
	std::cout << "X: " << Point1.x << " Y: " << Point1.y << " Z: " << Point1.z << std::endl;
	std::cout << "R: " << Point1.r << " G: " << Point1.g << " B: " << Point1.b << std::endl;
	std::cout << "S: " << Point1.s << " T: " << Point1.t << " Q: " << Point1.p << std::endl;
	std::cout << "0: " << Point1[0] << " 1: " << Point1[1] << " 2: " << Point1[2] << std::endl;
}

int main() {

	Constructors();
	Components();

	return 0;
}