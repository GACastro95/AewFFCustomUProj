// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/EImGuiDPIScaleMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImGuiDPIScaleMethod() {}
// Cross Module References
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static UEnum* EImGuiDPIScaleMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod, Z_Construct_UPackage__Script_ImGui(), TEXT("EImGuiDPIScaleMethod"));
		}
		return Singleton;
	}
	template<> IMGUI_API UEnum* StaticEnum<EImGuiDPIScaleMethod>()
	{
		return EImGuiDPIScaleMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImGuiDPIScaleMethod(EImGuiDPIScaleMethod_StaticEnum, TEXT("/Script/ImGui"), TEXT("EImGuiDPIScaleMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Hash() { return 4063548195U; }
	UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImGui();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImGuiDPIScaleMethod"), 0, Get_Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImGuiDPIScaleMethod::ImGui", (int64)EImGuiDPIScaleMethod::ImGui },
				{ "EImGuiDPIScaleMethod::Slate", (int64)EImGuiDPIScaleMethod::Slate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ImGui.Name", "EImGuiDPIScaleMethod::ImGui" },
				{ "ModuleRelativePath", "Public/EImGuiDPIScaleMethod.h" },
				{ "Slate.Name", "EImGuiDPIScaleMethod::Slate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImGui,
				nullptr,
				"EImGuiDPIScaleMethod",
				"EImGuiDPIScaleMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
