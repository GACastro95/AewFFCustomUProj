// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EEngineIniFileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEngineIniFileType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EEngineIniFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EEngineIniFileType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EEngineIniFileType::Type>()
	{
		return EEngineIniFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEngineIniFileType(EEngineIniFileType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EEngineIniFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Hash() { return 1818091497U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEngineIniFileType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEngineIniFileType::EngBaseEngineIni", (int64)EEngineIniFileType::EngBaseEngineIni },
				{ "EEngineIniFileType::EngWindowsEngineIni", (int64)EEngineIniFileType::EngWindowsEngineIni },
				{ "EEngineIniFileType::ProjDefaultEngineIni", (int64)EEngineIniFileType::ProjDefaultEngineIni },
				{ "EEngineIniFileType::ProjWindowsEngineIni", (int64)EEngineIniFileType::ProjWindowsEngineIni },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EngBaseEngineIni.Name", "EEngineIniFileType::EngBaseEngineIni" },
				{ "EngWindowsEngineIni.Name", "EEngineIniFileType::EngWindowsEngineIni" },
				{ "ModuleRelativePath", "Public/EEngineIniFileType.h" },
				{ "ProjDefaultEngineIni.Name", "EEngineIniFileType::ProjDefaultEngineIni" },
				{ "ProjWindowsEngineIni.Name", "EEngineIniFileType::ProjWindowsEngineIni" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EEngineIniFileType",
				"EEngineIniFileType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
