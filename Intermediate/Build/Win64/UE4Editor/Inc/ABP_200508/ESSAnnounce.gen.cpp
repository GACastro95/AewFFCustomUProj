// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAnnounce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAnnounce() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAnnounce();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAnnounce_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAnnounce, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAnnounce"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAnnounce>()
	{
		return ESSAnnounce_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAnnounce(ESSAnnounce_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAnnounce"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAnnounce_Hash() { return 2330926746U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAnnounce()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAnnounce"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAnnounce_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAnnounce::None", (int64)ESSAnnounce::None },
				{ "ESSAnnounce::BeforeShrink", (int64)ESSAnnounce::BeforeShrink },
				{ "ESSAnnounce::BeginShrink", (int64)ESSAnnounce::BeginShrink },
				{ "ESSAnnounce::OutOfSafeArea", (int64)ESSAnnounce::OutOfSafeArea },
				{ "ESSAnnounce::EnterSafeArea", (int64)ESSAnnounce::EnterSafeArea },
				{ "ESSAnnounce::AttentionPlayer", (int64)ESSAnnounce::AttentionPlayer },
				{ "ESSAnnounce::Congratulations", (int64)ESSAnnounce::Congratulations },
				{ "ESSAnnounce::VictoryRoyale", (int64)ESSAnnounce::VictoryRoyale },
				{ "ESSAnnounce::Max", (int64)ESSAnnounce::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttentionPlayer.Name", "ESSAnnounce::AttentionPlayer" },
				{ "BeforeShrink.Name", "ESSAnnounce::BeforeShrink" },
				{ "BeginShrink.Name", "ESSAnnounce::BeginShrink" },
				{ "BlueprintType", "true" },
				{ "Congratulations.Name", "ESSAnnounce::Congratulations" },
				{ "EnterSafeArea.Name", "ESSAnnounce::EnterSafeArea" },
				{ "Max.Name", "ESSAnnounce::Max" },
				{ "ModuleRelativePath", "Public/ESSAnnounce.h" },
				{ "None.Name", "ESSAnnounce::None" },
				{ "OutOfSafeArea.Name", "ESSAnnounce::OutOfSafeArea" },
				{ "VictoryRoyale.Name", "ESSAnnounce::VictoryRoyale" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAnnounce",
				"ESSAnnounce",
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
