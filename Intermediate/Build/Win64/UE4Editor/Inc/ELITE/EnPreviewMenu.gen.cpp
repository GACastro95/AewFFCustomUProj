// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnPreviewMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnPreviewMenu() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnPreviewMenu();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnPreviewMenu_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnPreviewMenu, Z_Construct_UPackage__Script_ELITE(), TEXT("EnPreviewMenu"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnPreviewMenu>()
	{
		return EnPreviewMenu_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnPreviewMenu(EnPreviewMenu_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnPreviewMenu"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnPreviewMenu_Hash() { return 898919700U; }
	UEnum* Z_Construct_UEnum_ELITE_EnPreviewMenu()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnPreviewMenu"), 0, Get_Z_Construct_UEnum_ELITE_EnPreviewMenu_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnPreviewMenu::Wrestler", (int64)EnPreviewMenu::Wrestler },
				{ "EnPreviewMenu::Mail", (int64)EnPreviewMenu::Mail },
				{ "EnPreviewMenu::Mail_Open", (int64)EnPreviewMenu::Mail_Open },
				{ "EnPreviewMenu::Mail_Close", (int64)EnPreviewMenu::Mail_Close },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Mail.Name", "EnPreviewMenu::Mail" },
				{ "Mail_Close.Name", "EnPreviewMenu::Mail_Close" },
				{ "Mail_Open.Name", "EnPreviewMenu::Mail_Open" },
				{ "ModuleRelativePath", "Public/EnPreviewMenu.h" },
				{ "Wrestler.Name", "EnPreviewMenu::Wrestler" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnPreviewMenu",
				"EnPreviewMenu",
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
