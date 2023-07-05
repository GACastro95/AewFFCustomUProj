// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSpeakerID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSpeakerID() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomSpeakerID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSpeakerID"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>()
	{
		return EAtomSpeakerID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSpeakerID(EAtomSpeakerID_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSpeakerID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Hash() { return 3927009472U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSpeakerID"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSpeakerID::FrontLeft", (int64)EAtomSpeakerID::FrontLeft },
				{ "EAtomSpeakerID::FrontRight", (int64)EAtomSpeakerID::FrontRight },
				{ "EAtomSpeakerID::FrontCenter", (int64)EAtomSpeakerID::FrontCenter },
				{ "EAtomSpeakerID::LowFrequency", (int64)EAtomSpeakerID::LowFrequency },
				{ "EAtomSpeakerID::SurroundLeft", (int64)EAtomSpeakerID::SurroundLeft },
				{ "EAtomSpeakerID::SurroundRight", (int64)EAtomSpeakerID::SurroundRight },
				{ "EAtomSpeakerID::SurroundBackLeft", (int64)EAtomSpeakerID::SurroundBackLeft },
				{ "EAtomSpeakerID::SurroundBackRight", (int64)EAtomSpeakerID::SurroundBackRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrontCenter.Name", "EAtomSpeakerID::FrontCenter" },
				{ "FrontLeft.Name", "EAtomSpeakerID::FrontLeft" },
				{ "FrontRight.Name", "EAtomSpeakerID::FrontRight" },
				{ "LowFrequency.Name", "EAtomSpeakerID::LowFrequency" },
				{ "ModuleRelativePath", "Public/EAtomSpeakerID.h" },
				{ "SurroundBackLeft.Name", "EAtomSpeakerID::SurroundBackLeft" },
				{ "SurroundBackRight.Name", "EAtomSpeakerID::SurroundBackRight" },
				{ "SurroundLeft.Name", "EAtomSpeakerID::SurroundLeft" },
				{ "SurroundRight.Name", "EAtomSpeakerID::SurroundRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSpeakerID",
				"EAtomSpeakerID",
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
