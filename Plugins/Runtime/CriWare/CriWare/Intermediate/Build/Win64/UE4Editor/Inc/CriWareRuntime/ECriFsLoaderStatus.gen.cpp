// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriFsLoaderStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriFsLoaderStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* ECriFsLoaderStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriFsLoaderStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsLoaderStatus>()
	{
		return ECriFsLoaderStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECriFsLoaderStatus(ECriFsLoaderStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("ECriFsLoaderStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Hash() { return 1108397361U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECriFsLoaderStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECriFsLoaderStatus::Stop", (int64)ECriFsLoaderStatus::Stop },
				{ "ECriFsLoaderStatus::Loading", (int64)ECriFsLoaderStatus::Loading },
				{ "ECriFsLoaderStatus::Complete", (int64)ECriFsLoaderStatus::Complete },
				{ "ECriFsLoaderStatus::Error", (int64)ECriFsLoaderStatus::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Complete.Name", "ECriFsLoaderStatus::Complete" },
				{ "Error.Name", "ECriFsLoaderStatus::Error" },
				{ "Loading.Name", "ECriFsLoaderStatus::Loading" },
				{ "ModuleRelativePath", "Public/ECriFsLoaderStatus.h" },
				{ "Stop.Name", "ECriFsLoaderStatus::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"ECriFsLoaderStatus",
				"ECriFsLoaderStatus",
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
