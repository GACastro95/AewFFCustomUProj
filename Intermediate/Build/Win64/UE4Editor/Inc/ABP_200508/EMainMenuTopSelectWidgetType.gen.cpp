// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMainMenuTopSelectWidgetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMainMenuTopSelectWidgetType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMainMenuTopSelectWidgetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMainMenuTopSelectWidgetType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMainMenuTopSelectWidgetType>()
	{
		return EMainMenuTopSelectWidgetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuTopSelectWidgetType(EMainMenuTopSelectWidgetType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMainMenuTopSelectWidgetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType_Hash() { return 2001471904U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuTopSelectWidgetType"), 0, Get_Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Play", (int64)EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Play },
				{ "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_LoadOut", (int64)EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_LoadOut },
				{ "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Wrestler", (int64)EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Wrestler },
				{ "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Reward", (int64)EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Reward },
				{ "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Num", (int64)EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMainMenuTopSelectWidgetType_LoadOut.Name", "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_LoadOut" },
				{ "EMainMenuTopSelectWidgetType_Num.Name", "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Num" },
				{ "EMainMenuTopSelectWidgetType_Play.Name", "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Play" },
				{ "EMainMenuTopSelectWidgetType_Reward.Name", "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Reward" },
				{ "EMainMenuTopSelectWidgetType_Wrestler.Name", "EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Wrestler" },
				{ "ModuleRelativePath", "Public/EMainMenuTopSelectWidgetType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMainMenuTopSelectWidgetType",
				"EMainMenuTopSelectWidgetType",
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
