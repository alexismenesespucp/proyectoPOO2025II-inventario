#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace inventarioModel {
	public ref class usuario {
	public:
		usuario() {};
		~usuario() {};
		String^ id;
		String^ name;
		String^ position;
		usuario^ setId(String^ id) {
			this->id = id;
			return this;
		}
		usuario^ setName(String^ name) {
			this->name = name;
			return this;
		}
		usuario^ setPosition(String^ position) {
			this->position = position;
			return this;
		}
	};
}
