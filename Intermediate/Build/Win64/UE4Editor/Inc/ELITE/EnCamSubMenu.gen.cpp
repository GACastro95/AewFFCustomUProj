// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCamSubMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCamSubMenu() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCamSubMenu();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCamSubMenu_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCamSubMenu, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCamSubMenu"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCamSubMenu>()
	{
		return EnCamSubMenu_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCamSubMenu(EnCamSubMenu_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCamSubMenu"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCamSubMenu_Hash() { return 556582933U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCamSubMenu()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCamSubMenu"), 0, Get_Z_Construct_UEnum_ELITE_EnCamSubMenu_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCamSubMenu::MovesList", (int64)EnCamSubMenu::MovesList },
				{ "EnCamSubMenu::PresetCopy", (int64)EnCamSubMenu::PresetCopy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnCamSubMenu.h" },
				{ "MovesList.Name", "EnCamSubMenu::MovesList" },
				{ "PresetCopy.Name", "EnCamSubMenu::PresetCopy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCamSubMenu",
				"EnCamSubMenu",
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
