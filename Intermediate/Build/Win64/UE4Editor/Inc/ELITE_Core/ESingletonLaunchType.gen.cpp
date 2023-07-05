// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ESingletonLaunchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESingletonLaunchType() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* ESingletonLaunchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("ESingletonLaunchType"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<ESingletonLaunchType>()
	{
		return ESingletonLaunchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESingletonLaunchType(ESingletonLaunchType_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("ESingletonLaunchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType_Hash() { return 2330861212U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESingletonLaunchType"), 0, Get_Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESingletonLaunchType::GameOnly", (int64)ESingletonLaunchType::GameOnly },
				{ "ESingletonLaunchType::AnyTime", (int64)ESingletonLaunchType::AnyTime },
				{ "ESingletonLaunchType::Manual", (int64)ESingletonLaunchType::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyTime.Name", "ESingletonLaunchType::AnyTime" },
				{ "BlueprintType", "true" },
				{ "GameOnly.Name", "ESingletonLaunchType::GameOnly" },
				{ "Manual.Name", "ESingletonLaunchType::Manual" },
				{ "ModuleRelativePath", "Public/ESingletonLaunchType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"ESingletonLaunchType",
				"ESingletonLaunchType",
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
