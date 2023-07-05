// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStatusWidgetUpdateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStatusWidgetUpdateType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStatusWidgetUpdateType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStatusWidgetUpdateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStatusWidgetUpdateType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStatusWidgetUpdateType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStatusWidgetUpdateType>()
	{
		return ECareerStatusWidgetUpdateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStatusWidgetUpdateType(ECareerStatusWidgetUpdateType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStatusWidgetUpdateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStatusWidgetUpdateType_Hash() { return 4248040485U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStatusWidgetUpdateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStatusWidgetUpdateType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStatusWidgetUpdateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStatusWidgetUpdateType::Condition", (int64)ECareerStatusWidgetUpdateType::Condition },
				{ "ECareerStatusWidgetUpdateType::Motivation", (int64)ECareerStatusWidgetUpdateType::Motivation },
				{ "ECareerStatusWidgetUpdateType::Followers", (int64)ECareerStatusWidgetUpdateType::Followers },
				{ "ECareerStatusWidgetUpdateType::CareerMoney", (int64)ECareerStatusWidgetUpdateType::CareerMoney },
				{ "ECareerStatusWidgetUpdateType::SkillPoint", (int64)ECareerStatusWidgetUpdateType::SkillPoint },
				{ "ECareerStatusWidgetUpdateType::All", (int64)ECareerStatusWidgetUpdateType::All },
				{ "ECareerStatusWidgetUpdateType::Chain", (int64)ECareerStatusWidgetUpdateType::Chain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ECareerStatusWidgetUpdateType::All" },
				{ "BlueprintType", "true" },
				{ "CareerMoney.Name", "ECareerStatusWidgetUpdateType::CareerMoney" },
				{ "Chain.Name", "ECareerStatusWidgetUpdateType::Chain" },
				{ "Condition.Name", "ECareerStatusWidgetUpdateType::Condition" },
				{ "Followers.Name", "ECareerStatusWidgetUpdateType::Followers" },
				{ "ModuleRelativePath", "Public/ECareerStatusWidgetUpdateType.h" },
				{ "Motivation.Name", "ECareerStatusWidgetUpdateType::Motivation" },
				{ "SkillPoint.Name", "ECareerStatusWidgetUpdateType::SkillPoint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStatusWidgetUpdateType",
				"ECareerStatusWidgetUpdateType",
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
