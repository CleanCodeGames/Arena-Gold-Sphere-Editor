#include <entt/entt.hpp>
#include <SFML/Graphics.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include <imgui_stdlib.h>

//	void System::InitImGui()
//	{
//		ImGui::SFML::Init(*window);
//		auto& io = ImGui::GetIO();
//		auto& style = ImGui::GetStyle();
//	
//		io.Fonts->Clear();
//		const float charsize = static_cast<float>(System::resolution.y) * 0.0175f;
//		io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", charsize, NULL, io.Fonts->GetGlyphRangesCyrillic());
//		ImGui::SFML::UpdateFontTexture();
//	
//		// Отступы элементов внутри окна
//		style.WindowPadding.x = 2;
//		style.WindowPadding.y = 2;
//	
//		// Отступы внутри элементов
//		style.FramePadding.x = 2;
//		style.FramePadding.y = 2;
//	
//		// Пространство между элементами
//		style.ItemSpacing.x = 2;
//		style.ItemSpacing.y = 2;
//	
//		// Закругление элементов
//		style.FrameRounding = 5;
//	}

int main()
{
	entt::registry reg;
	sf::Window wnd;
	return 0;
}