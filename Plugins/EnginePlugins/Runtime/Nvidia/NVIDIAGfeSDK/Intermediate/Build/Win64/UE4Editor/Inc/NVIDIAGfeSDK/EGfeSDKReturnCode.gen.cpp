// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/EGfeSDKReturnCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGfeSDKReturnCode() {}
// Cross Module References
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
	static UEnum* EGfeSDKReturnCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("EGfeSDKReturnCode"));
		}
		return Singleton;
	}
	template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKReturnCode>()
	{
		return EGfeSDKReturnCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGfeSDKReturnCode(EGfeSDKReturnCode_StaticEnum, TEXT("/Script/NVIDIAGfeSDK"), TEXT("EGfeSDKReturnCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode_Hash() { return 602385189U; }
	UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGfeSDKReturnCode"), 0, Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKReturnCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGfeSDKReturnCode::Success", (int64)EGfeSDKReturnCode::Success },
				{ "EGfeSDKReturnCode::SuccessIpcOldSdk", (int64)EGfeSDKReturnCode::SuccessIpcOldSdk },
				{ "EGfeSDKReturnCode::SuccessIpcOldGfe", (int64)EGfeSDKReturnCode::SuccessIpcOldGfe },
				{ "EGfeSDKReturnCode::Error", (int64)EGfeSDKReturnCode::Error },
				{ "EGfeSDKReturnCode::ErrorGfeVersion", (int64)EGfeSDKReturnCode::ErrorGfeVersion },
				{ "EGfeSDKReturnCode::ErrorSdkVersion", (int64)EGfeSDKReturnCode::ErrorSdkVersion },
				{ "EGfeSDKReturnCode::ErrorModuleNotLoaded", (int64)EGfeSDKReturnCode::ErrorModuleNotLoaded },
				{ "EGfeSDKReturnCode::ErrorWrongTimeRangeSet", (int64)EGfeSDKReturnCode::ErrorWrongTimeRangeSet },
				{ "EGfeSDKReturnCode::ErrorGeneric", (int64)EGfeSDKReturnCode::ErrorGeneric },
				{ "EGfeSDKReturnCode::ErrorNotImplemented", (int64)EGfeSDKReturnCode::ErrorNotImplemented },
				{ "EGfeSDKReturnCode::ErrorInvalidParameter", (int64)EGfeSDKReturnCode::ErrorInvalidParameter },
				{ "EGfeSDKReturnCode::ErrorNotSet", (int64)EGfeSDKReturnCode::ErrorNotSet },
				{ "EGfeSDKReturnCode::ErrorShadowplayIRDisabled", (int64)EGfeSDKReturnCode::ErrorShadowplayIRDisabled },
				{ "EGfeSDKReturnCode::ErrorSDKInUse", (int64)EGfeSDKReturnCode::ErrorSDKInUse },
				{ "EGfeSDKReturnCode::ErrorGroupNotFound", (int64)EGfeSDKReturnCode::ErrorGroupNotFound },
				{ "EGfeSDKReturnCode::ErrorFileNotFound", (int64)EGfeSDKReturnCode::ErrorFileNotFound },
				{ "EGfeSDKReturnCode::ErrorHighlightsSetupFailed", (int64)EGfeSDKReturnCode::ErrorHighlightsSetupFailed },
				{ "EGfeSDKReturnCode::ErrorHighlightsNotConfigured", (int64)EGfeSDKReturnCode::ErrorHighlightsNotConfigured },
				{ "EGfeSDKReturnCode::ErrorHighlightSaveFailed", (int64)EGfeSDKReturnCode::ErrorHighlightSaveFailed },
				{ "EGfeSDKReturnCode::ErrorUnexpectedException", (int64)EGfeSDKReturnCode::ErrorUnexpectedException },
				{ "EGfeSDKReturnCode::ErrorNoHighlights", (int64)EGfeSDKReturnCode::ErrorNoHighlights },
				{ "EGfeSDKReturnCode::ErrorNoConnection", (int64)EGfeSDKReturnCode::ErrorNoConnection },
				{ "EGfeSDKReturnCode::ErrorPermissionNotGranted", (int64)EGfeSDKReturnCode::ErrorPermissionNotGranted },
				{ "EGfeSDKReturnCode::ErrorPermissionDenied", (int64)EGfeSDKReturnCode::ErrorPermissionDenied },
				{ "EGfeSDKReturnCode::ErrorInvalidHandle", (int64)EGfeSDKReturnCode::ErrorInvalidHandle },
				{ "EGfeSDKReturnCode::ErrorUnhandledException", (int64)EGfeSDKReturnCode::ErrorUnhandledException },
				{ "EGfeSDKReturnCode::ErrorOutOfMemory", (int64)EGfeSDKReturnCode::ErrorOutOfMemory },
				{ "EGfeSDKReturnCode::ErrorLoadLibrary", (int64)EGfeSDKReturnCode::ErrorLoadLibrary },
				{ "EGfeSDKReturnCode::ErrorLibraryCallFailed", (int64)EGfeSDKReturnCode::ErrorLibraryCallFailed },
				{ "EGfeSDKReturnCode::ErrorIPCFailed", (int64)EGfeSDKReturnCode::ErrorIPCFailed },
				{ "EGfeSDKReturnCode::ErrorConnection", (int64)EGfeSDKReturnCode::ErrorConnection },
				{ "EGfeSDKReturnCode::ErrorLibCallTimeout", (int64)EGfeSDKReturnCode::ErrorLibCallTimeout },
				{ "EGfeSDKReturnCode::ErrorApplicationLookupFailed", (int64)EGfeSDKReturnCode::ErrorApplicationLookupFailed },
				{ "EGfeSDKReturnCode::ErrorApplicationNotKnown", (int64)EGfeSDKReturnCode::ErrorApplicationNotKnown },
				{ "EGfeSDKReturnCode::ErrorFeatureDisabled", (int64)EGfeSDKReturnCode::ErrorFeatureDisabled },
				{ "EGfeSDKReturnCode::ErrorAppNoOptimization", (int64)EGfeSDKReturnCode::ErrorAppNoOptimization },
				{ "EGfeSDKReturnCode::ErrorAppSettingsRead", (int64)EGfeSDKReturnCode::ErrorAppSettingsRead },
				{ "EGfeSDKReturnCode::ErrorAppSettingsWrite", (int64)EGfeSDKReturnCode::ErrorAppSettingsWrite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Error.Name", "EGfeSDKReturnCode::Error" },
				{ "ErrorApplicationLookupFailed.Name", "EGfeSDKReturnCode::ErrorApplicationLookupFailed" },
				{ "ErrorApplicationNotKnown.Name", "EGfeSDKReturnCode::ErrorApplicationNotKnown" },
				{ "ErrorAppNoOptimization.Name", "EGfeSDKReturnCode::ErrorAppNoOptimization" },
				{ "ErrorAppSettingsRead.Name", "EGfeSDKReturnCode::ErrorAppSettingsRead" },
				{ "ErrorAppSettingsWrite.Name", "EGfeSDKReturnCode::ErrorAppSettingsWrite" },
				{ "ErrorConnection.Name", "EGfeSDKReturnCode::ErrorConnection" },
				{ "ErrorFeatureDisabled.Name", "EGfeSDKReturnCode::ErrorFeatureDisabled" },
				{ "ErrorFileNotFound.Name", "EGfeSDKReturnCode::ErrorFileNotFound" },
				{ "ErrorGeneric.Name", "EGfeSDKReturnCode::ErrorGeneric" },
				{ "ErrorGfeVersion.Name", "EGfeSDKReturnCode::ErrorGfeVersion" },
				{ "ErrorGroupNotFound.Name", "EGfeSDKReturnCode::ErrorGroupNotFound" },
				{ "ErrorHighlightSaveFailed.Name", "EGfeSDKReturnCode::ErrorHighlightSaveFailed" },
				{ "ErrorHighlightsNotConfigured.Name", "EGfeSDKReturnCode::ErrorHighlightsNotConfigured" },
				{ "ErrorHighlightsSetupFailed.Name", "EGfeSDKReturnCode::ErrorHighlightsSetupFailed" },
				{ "ErrorInvalidHandle.Name", "EGfeSDKReturnCode::ErrorInvalidHandle" },
				{ "ErrorInvalidParameter.Name", "EGfeSDKReturnCode::ErrorInvalidParameter" },
				{ "ErrorIPCFailed.Name", "EGfeSDKReturnCode::ErrorIPCFailed" },
				{ "ErrorLibCallTimeout.Name", "EGfeSDKReturnCode::ErrorLibCallTimeout" },
				{ "ErrorLibraryCallFailed.Name", "EGfeSDKReturnCode::ErrorLibraryCallFailed" },
				{ "ErrorLoadLibrary.Name", "EGfeSDKReturnCode::ErrorLoadLibrary" },
				{ "ErrorModuleNotLoaded.Name", "EGfeSDKReturnCode::ErrorModuleNotLoaded" },
				{ "ErrorNoConnection.Name", "EGfeSDKReturnCode::ErrorNoConnection" },
				{ "ErrorNoHighlights.Name", "EGfeSDKReturnCode::ErrorNoHighlights" },
				{ "ErrorNotImplemented.Name", "EGfeSDKReturnCode::ErrorNotImplemented" },
				{ "ErrorNotSet.Name", "EGfeSDKReturnCode::ErrorNotSet" },
				{ "ErrorOutOfMemory.Name", "EGfeSDKReturnCode::ErrorOutOfMemory" },
				{ "ErrorPermissionDenied.Name", "EGfeSDKReturnCode::ErrorPermissionDenied" },
				{ "ErrorPermissionNotGranted.Name", "EGfeSDKReturnCode::ErrorPermissionNotGranted" },
				{ "ErrorSDKInUse.Name", "EGfeSDKReturnCode::ErrorSDKInUse" },
				{ "ErrorSdkVersion.Name", "EGfeSDKReturnCode::ErrorSdkVersion" },
				{ "ErrorShadowplayIRDisabled.Name", "EGfeSDKReturnCode::ErrorShadowplayIRDisabled" },
				{ "ErrorUnexpectedException.Name", "EGfeSDKReturnCode::ErrorUnexpectedException" },
				{ "ErrorUnhandledException.Name", "EGfeSDKReturnCode::ErrorUnhandledException" },
				{ "ErrorWrongTimeRangeSet.Name", "EGfeSDKReturnCode::ErrorWrongTimeRangeSet" },
				{ "ModuleRelativePath", "Public/EGfeSDKReturnCode.h" },
				{ "Success.Name", "EGfeSDKReturnCode::Success" },
				{ "SuccessIpcOldGfe.Name", "EGfeSDKReturnCode::SuccessIpcOldGfe" },
				{ "SuccessIpcOldSdk.Name", "EGfeSDKReturnCode::SuccessIpcOldSdk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
				nullptr,
				"EGfeSDKReturnCode",
				"EGfeSDKReturnCode",
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
