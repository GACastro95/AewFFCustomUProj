// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSTitleStorageEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSTitleStorageEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSTitleStorageEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSTitleStorageEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSTitleStorageEvent>()
	{
		return EEOSTitleStorageEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSTitleStorageEvent(EEOSTitleStorageEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSTitleStorageEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent_Hash() { return 1185688198U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSTitleStorageEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSTitleStorageEvent::GetFileList", (int64)EEOSTitleStorageEvent::GetFileList },
				{ "EEOSTitleStorageEvent::GetFileListErr", (int64)EEOSTitleStorageEvent::GetFileListErr },
				{ "EEOSTitleStorageEvent::GetFileListEmpty", (int64)EEOSTitleStorageEvent::GetFileListEmpty },
				{ "EEOSTitleStorageEvent::Download", (int64)EEOSTitleStorageEvent::Download },
				{ "EEOSTitleStorageEvent::DownloadErr", (int64)EEOSTitleStorageEvent::DownloadErr },
				{ "EEOSTitleStorageEvent::DownloadCanceled", (int64)EEOSTitleStorageEvent::DownloadCanceled },
				{ "EEOSTitleStorageEvent::DownloadProgress", (int64)EEOSTitleStorageEvent::DownloadProgress },
				{ "EEOSTitleStorageEvent::Pending", (int64)EEOSTitleStorageEvent::Pending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Download.Name", "EEOSTitleStorageEvent::Download" },
				{ "DownloadCanceled.Name", "EEOSTitleStorageEvent::DownloadCanceled" },
				{ "DownloadErr.Name", "EEOSTitleStorageEvent::DownloadErr" },
				{ "DownloadProgress.Name", "EEOSTitleStorageEvent::DownloadProgress" },
				{ "GetFileList.Name", "EEOSTitleStorageEvent::GetFileList" },
				{ "GetFileListEmpty.Name", "EEOSTitleStorageEvent::GetFileListEmpty" },
				{ "GetFileListErr.Name", "EEOSTitleStorageEvent::GetFileListErr" },
				{ "ModuleRelativePath", "Public/EEOSTitleStorageEvent.h" },
				{ "Pending.Name", "EEOSTitleStorageEvent::Pending" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSTitleStorageEvent",
				"EEOSTitleStorageEvent",
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
