// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSequenceEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSequenceEventType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomSequenceEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSequenceEventType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSequenceEventType>()
	{
		return EAtomSequenceEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSequenceEventType(EAtomSequenceEventType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSequenceEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType_Hash() { return 2195809116U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSequenceEventType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK", (int64)EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK },
				{ "EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE", (int64)EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE },
				{ "EAtomSequenceEventType::SEQUENCE_MAX", (int64)EAtomSequenceEventType::SEQUENCE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAtomSequenceEventType.h" },
				{ "SEQUENCE_MAX.Hidden", "" },
				{ "SEQUENCE_MAX.Name", "EAtomSequenceEventType::SEQUENCE_MAX" },
				{ "SEQUENCE_TYPE_CALLBACK.Name", "EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK" },
				{ "SEQUENCE_TYPESIZE_4BYTE.Name", "EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSequenceEventType",
				"EAtomSequenceEventType",
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
