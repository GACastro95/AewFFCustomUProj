// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDebug_AutoPlay_RepeatUseTurn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDebug_AutoPlay_RepeatUseTurn() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_RepeatUseTurn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDebug_AutoPlay_RepeatUseTurn_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_RepeatUseTurn, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDebug_AutoPlay_RepeatUseTurn"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDebug_AutoPlay_RepeatUseTurn>()
	{
		return ECareerDebug_AutoPlay_RepeatUseTurn_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDebug_AutoPlay_RepeatUseTurn(ECareerDebug_AutoPlay_RepeatUseTurn_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDebug_AutoPlay_RepeatUseTurn"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_RepeatUseTurn_Hash() { return 3957582264U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_RepeatUseTurn()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDebug_AutoPlay_RepeatUseTurn"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_RepeatUseTurn_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDebug_AutoPlay_RepeatUseTurn::NoRepeat", (int64)ECareerDebug_AutoPlay_RepeatUseTurn::NoRepeat },
				{ "ECareerDebug_AutoPlay_RepeatUseTurn::Training", (int64)ECareerDebug_AutoPlay_RepeatUseTurn::Training },
				{ "ECareerDebug_AutoPlay_RepeatUseTurn::Dining", (int64)ECareerDebug_AutoPlay_RepeatUseTurn::Dining },
				{ "ECareerDebug_AutoPlay_RepeatUseTurn::SightSeeing", (int64)ECareerDebug_AutoPlay_RepeatUseTurn::SightSeeing },
				{ "ECareerDebug_AutoPlay_RepeatUseTurn::ECareerDebug_AutoPlay_MAX", (int64)ECareerDebug_AutoPlay_RepeatUseTurn::ECareerDebug_AutoPlay_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dining.Name", "ECareerDebug_AutoPlay_RepeatUseTurn::Dining" },
				{ "ECareerDebug_AutoPlay_MAX.Hidden", "" },
				{ "ECareerDebug_AutoPlay_MAX.Name", "ECareerDebug_AutoPlay_RepeatUseTurn::ECareerDebug_AutoPlay_MAX" },
				{ "ModuleRelativePath", "Public/ECareerDebug_AutoPlay_RepeatUseTurn.h" },
				{ "NoRepeat.Name", "ECareerDebug_AutoPlay_RepeatUseTurn::NoRepeat" },
				{ "SightSeeing.Name", "ECareerDebug_AutoPlay_RepeatUseTurn::SightSeeing" },
				{ "Training.Name", "ECareerDebug_AutoPlay_RepeatUseTurn::Training" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDebug_AutoPlay_RepeatUseTurn",
				"ECareerDebug_AutoPlay_RepeatUseTurn",
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
