// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/EImGuiCanvasSizeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImGuiCanvasSizeType() {}
// Cross Module References
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static UEnum* EImGuiCanvasSizeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType, Z_Construct_UPackage__Script_ImGui(), TEXT("EImGuiCanvasSizeType"));
		}
		return Singleton;
	}
	template<> IMGUI_API UEnum* StaticEnum<EImGuiCanvasSizeType>()
	{
		return EImGuiCanvasSizeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImGuiCanvasSizeType(EImGuiCanvasSizeType_StaticEnum, TEXT("/Script/ImGui"), TEXT("EImGuiCanvasSizeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Hash() { return 3426784340U; }
	UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImGui();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImGuiCanvasSizeType"), 0, Get_Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImGuiCanvasSizeType::Custom", (int64)EImGuiCanvasSizeType::Custom },
				{ "EImGuiCanvasSizeType::Desktop", (int64)EImGuiCanvasSizeType::Desktop },
				{ "EImGuiCanvasSizeType::Viewport", (int64)EImGuiCanvasSizeType::Viewport },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "EImGuiCanvasSizeType::Custom" },
				{ "Desktop.Name", "EImGuiCanvasSizeType::Desktop" },
				{ "ModuleRelativePath", "Public/EImGuiCanvasSizeType.h" },
				{ "Viewport.Name", "EImGuiCanvasSizeType::Viewport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImGui,
				nullptr,
				"EImGuiCanvasSizeType",
				"EImGuiCanvasSizeType",
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
