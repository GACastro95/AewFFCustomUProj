// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMainMenuSubWidgetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMainMenuSubWidgetType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMainMenuSubWidgetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMainMenuSubWidgetType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMainMenuSubWidgetType>()
	{
		return EMainMenuSubWidgetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuSubWidgetType(EMainMenuSubWidgetType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMainMenuSubWidgetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType_Hash() { return 3692734587U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuSubWidgetType"), 0, Get_Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Play", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_Play },
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_BattlePass", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_BattlePass },
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Shop", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_Shop },
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Num", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_Num },
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_SelectWrestler", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_SelectWrestler },
				{ "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Preset", (int64)EMainMenuSubWidgetType::EMainMenuSubWidgetType_Preset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMainMenuSubWidgetType_BattlePass.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_BattlePass" },
				{ "EMainMenuSubWidgetType_Num.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Num" },
				{ "EMainMenuSubWidgetType_Play.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Play" },
				{ "EMainMenuSubWidgetType_Preset.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Preset" },
				{ "EMainMenuSubWidgetType_SelectWrestler.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_SelectWrestler" },
				{ "EMainMenuSubWidgetType_Shop.Name", "EMainMenuSubWidgetType::EMainMenuSubWidgetType_Shop" },
				{ "ModuleRelativePath", "Public/EMainMenuSubWidgetType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMainMenuSubWidgetType",
				"EMainMenuSubWidgetType",
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
