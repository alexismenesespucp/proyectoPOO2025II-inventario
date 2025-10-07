#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace inventarioModel;

namespace inventarioController {
	public ref class usercontroller {
	public:
		usercontroller() {
			this->usuarios = gcnew List<usuario^>();
		};
		~usercontroller() {};
		List< usuario^ >^ usuarios;
		void createUser(String^ id, String^ name, String^ position) {
			usuario^ user = (gcnew usuario())
							->setId(id)
							->setName(name)
							->setPosition(position);
			System::Console::WriteLine("Usuario " + user->name + " creado.");
			System::Console::WriteLine("Su rol es " + user->position + ".\n");

		}


	};
}