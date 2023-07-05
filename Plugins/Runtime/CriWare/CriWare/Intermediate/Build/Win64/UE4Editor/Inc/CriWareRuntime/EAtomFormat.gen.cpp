// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomFormat() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomFormat, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomFormat"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFormat>()
	{
		return EAtomFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomFormat(EAtomFormat_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Hash() { return 542880523U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomFormat"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomFormat::None", (int64)EAtomFormat::None },
				{ "EAtomFormat::ADX", (int64)EAtomFormat::ADX },
				{ "EAtomFormat::HCA", (int64)EAtomFormat::HCA },
				{ "EAtomFormat::HCAMX", (int64)EAtomFormat::HCAMX },
				{ "EAtomFormat::AIFF", (int64)EAtomFormat::AIFF },
				{ "EAtomFormat::Wave", (int64)EAtomFormat::Wave },
				{ "EAtomFormat::RawPCM", (int64)EAtomFormat::RawPCM },
				{ "EAtomFormat::Vibration", (int64)EAtomFormat::Vibration },
				{ "EAtomFormat::AudioBuffer", (int64)EAtomFormat::AudioBuffer },
				{ "EAtomFormat::Instrument", (int64)EAtomFormat::Instrument },
				{ "EAtomFormat::Hardware1", (int64)EAtomFormat::Hardware1 },
				{ "EAtomFormat::Hardware2", (int64)EAtomFormat::Hardware2 },
				{ "EAtomFormat::Num", (int64)EAtomFormat::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADX.Name", "EAtomFormat::ADX" },
				{ "AIFF.Name", "EAtomFormat::AIFF" },
				{ "AudioBuffer.Name", "EAtomFormat::AudioBuffer" },
				{ "BlueprintType", "true" },
				{ "Hardware1.Name", "EAtomFormat::Hardware1" },
				{ "Hardware2.Name", "EAtomFormat::Hardware2" },
				{ "HCA.Name", "EAtomFormat::HCA" },
				{ "HCAMX.Name", "EAtomFormat::HCAMX" },
				{ "Instrument.Name", "EAtomFormat::Instrument" },
				{ "ModuleRelativePath", "Public/EAtomFormat.h" },
				{ "None.Name", "EAtomFormat::None" },
				{ "Num.Name", "EAtomFormat::Num" },
				{ "RawPCM.Name", "EAtomFormat::RawPCM" },
				{ "Vibration.Name", "EAtomFormat::Vibration" },
				{ "Wave.Name", "EAtomFormat::Wave" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomFormat",
				"EAtomFormat",
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
