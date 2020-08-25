#pragma once

namespace Config {
	namespace Aimbot {
		inline bool Enabled{ true };
		inline Enums::KeyCode Key{ Enums::KeyCode::Q };
		inline float Fov{ 90.f };
		inline bool Silent{ true };
		inline bool DrawFov{ true };
		inline int Bone{ 0 };
		inline bool Visible{ true };
		inline bool SpawnProtect{ true };
	}

	namespace ESP {
		inline bool Enabled{ true };
		inline bool Visible{ false };
		inline bool Name{ true };
		inline bool Box{ true };

		namespace Colors {
			inline UnityEngine::Color Box{ 1.f, 0.f, 0.f, 1.f };
			inline UnityEngine::Color VisibleBox{ 0.f, 1.f, 0.f, 1.f };
			inline UnityEngine::Color SpawnProtectBox{ 0.f, 0.f, 1.f, 1.f };
		};
	}

	namespace Misc {
		inline bool HitDistanceLimit{ true };
		inline float CameraFov{ 0.f };
	}
}
