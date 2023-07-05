// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESessionPlayerStateNameType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESessionPlayerStateNameType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESessionPlayerStateNameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESessionPlayerStateNameType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESessionPlayerStateNameType>()
	{
		return ESessionPlayerStateNameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionPlayerStateNameType(ESessionPlayerStateNameType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESessionPlayerStateNameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType_Hash() { return 900306953U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionPlayerStateNameType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESessionPlayerStateNameType::Initialize", (int64)ESessionPlayerStateNameType::Initialize },
				{ "ESessionPlayerStateNameType::Map", (int64)ESessionPlayerStateNameType::Map },
				{ "ESessionPlayerStateNameType::Entrance", (int64)ESessionPlayerStateNameType::Entrance },
				{ "ESessionPlayerStateNameType::Start", (int64)ESessionPlayerStateNameType::Start },
				{ "ESessionPlayerStateNameType::Match", (int64)ESessionPlayerStateNameType::Match },
				{ "ESessionPlayerStateNameType::Restart", (int64)ESessionPlayerStateNameType::Restart },
				{ "ESessionPlayerStateNameType::Assets", (int64)ESessionPlayerStateNameType::Assets },
				{ "ESessionPlayerStateNameType::NextMatch", (int64)ESessionPlayerStateNameType::NextMatch },
				{ "ESessionPlayerStateNameType::Widget", (int64)ESessionPlayerStateNameType::Widget },
				{ "ESessionPlayerStateNameType::Max", (int64)ESessionPlayerStateNameType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Assets.Name", "ESessionPlayerStateNameType::Assets" },
				{ "BlueprintType", "true" },
				{ "Entrance.Name", "ESessionPlayerStateNameType::Entrance" },
				{ "Initialize.Name", "ESessionPlayerStateNameType::Initialize" },
				{ "Map.Name", "ESessionPlayerStateNameType::Map" },
				{ "Match.Name", "ESessionPlayerStateNameType::Match" },
				{ "Max.Name", "ESessionPlayerStateNameType::Max" },
				{ "ModuleRelativePath", "Public/ESessionPlayerStateNameType.h" },
				{ "NextMatch.Name", "ESessionPlayerStateNameType::NextMatch" },
				{ "Restart.Name", "ESessionPlayerStateNameType::Restart" },
				{ "Start.Name", "ESessionPlayerStateNameType::Start" },
				{ "Widget.Name", "ESessionPlayerStateNameType::Widget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESessionPlayerStateNameType",
				"ESessionPlayerStateNameType",
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
