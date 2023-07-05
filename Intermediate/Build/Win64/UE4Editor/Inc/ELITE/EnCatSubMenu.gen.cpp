// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCatSubMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCatSubMenu() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatSubMenu();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCatSubMenu_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCatSubMenu, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCatSubMenu"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCatSubMenu>()
	{
		return EnCatSubMenu_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCatSubMenu(EnCatSubMenu_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCatSubMenu"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCatSubMenu_Hash() { return 1194506572U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCatSubMenu()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCatSubMenu"), 0, Get_Z_Construct_UEnum_ELITE_EnCatSubMenu_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCatSubMenu::None", (int64)EnCatSubMenu::None },
				{ "EnCatSubMenu::Top", (int64)EnCatSubMenu::Top },
				{ "EnCatSubMenu::TeamSelect", (int64)EnCatSubMenu::TeamSelect },
				{ "EnCatSubMenu::Loadout", (int64)EnCatSubMenu::Loadout },
				{ "EnCatSubMenu::Profile", (int64)EnCatSubMenu::Profile },
				{ "EnCatSubMenu::Member", (int64)EnCatSubMenu::Member },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loadout.Name", "EnCatSubMenu::Loadout" },
				{ "Member.Name", "EnCatSubMenu::Member" },
				{ "ModuleRelativePath", "Public/EnCatSubMenu.h" },
				{ "None.Name", "EnCatSubMenu::None" },
				{ "Profile.Name", "EnCatSubMenu::Profile" },
				{ "TeamSelect.Name", "EnCatSubMenu::TeamSelect" },
				{ "Top.Name", "EnCatSubMenu::Top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCatSubMenu",
				"EnCatSubMenu",
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
