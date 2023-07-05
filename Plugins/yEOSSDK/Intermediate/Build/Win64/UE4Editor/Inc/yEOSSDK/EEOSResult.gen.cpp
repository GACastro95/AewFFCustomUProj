// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSResult() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSResult();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSResult, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSResult"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSResult>()
	{
		return EEOSResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSResult(EEOSResult_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSResult_Hash() { return 2490784106U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSResult"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSResult::Success", (int64)EEOSResult::Success },
				{ "EEOSResult::AlreadyStarted", (int64)EEOSResult::AlreadyStarted },
				{ "EEOSResult::AlreadyStoped", (int64)EEOSResult::AlreadyStoped },
				{ "EEOSResult::AlreadyContaintsData", (int64)EEOSResult::AlreadyContaintsData },
				{ "EEOSResult::AlreadyContaintsUser", (int64)EEOSResult::AlreadyContaintsUser },
				{ "EEOSResult::AlreadyContaintsInstance", (int64)EEOSResult::AlreadyContaintsInstance },
				{ "EEOSResult::AlreadyRegistered", (int64)EEOSResult::AlreadyRegistered },
				{ "EEOSResult::AlreadyInitialized", (int64)EEOSResult::AlreadyInitialized },
				{ "EEOSResult::AlreadyReleased", (int64)EEOSResult::AlreadyReleased },
				{ "EEOSResult::ContainsNoData", (int64)EEOSResult::ContainsNoData },
				{ "EEOSResult::ContainsNoUser", (int64)EEOSResult::ContainsNoUser },
				{ "EEOSResult::ContainsNoInstance", (int64)EEOSResult::ContainsNoInstance },
				{ "EEOSResult::WrongHandle", (int64)EEOSResult::WrongHandle },
				{ "EEOSResult::WrongEOSHandle", (int64)EEOSResult::WrongEOSHandle },
				{ "EEOSResult::WrongInstance", (int64)EEOSResult::WrongInstance },
				{ "EEOSResult::WrongArgument", (int64)EEOSResult::WrongArgument },
				{ "EEOSResult::WrongFormat", (int64)EEOSResult::WrongFormat },
				{ "EEOSResult::WrongType", (int64)EEOSResult::WrongType },
				{ "EEOSResult::WrongString", (int64)EEOSResult::WrongString },
				{ "EEOSResult::WrongTargetUser", (int64)EEOSResult::WrongTargetUser },
				{ "EEOSResult::WrongInternalStatus", (int64)EEOSResult::WrongInternalStatus },
				{ "EEOSResult::QueryResultIsError", (int64)EEOSResult::QueryResultIsError },
				{ "EEOSResult::InternalStateError", (int64)EEOSResult::InternalStateError },
				{ "EEOSResult::EOSSDKInternalError", (int64)EEOSResult::EOSSDKInternalError },
				{ "EEOSResult::IncommoingNotAcceptSocketID", (int64)EEOSResult::IncommoingNotAcceptSocketID },
				{ "EEOSResult::UnknownChannelID", (int64)EEOSResult::UnknownChannelID },
				{ "EEOSResult::PermissionDeniedByDevPortal", (int64)EEOSResult::PermissionDeniedByDevPortal },
				{ "EEOSResult::ConvertStringFailed", (int64)EEOSResult::ConvertStringFailed },
				{ "EEOSResult::InsufficientMemory", (int64)EEOSResult::InsufficientMemory },
				{ "EEOSResult::NeedsEpicAccountID", (int64)EEOSResult::NeedsEpicAccountID },
				{ "EEOSResult::NeedsEpicLocalAccountID", (int64)EEOSResult::NeedsEpicLocalAccountID },
				{ "EEOSResult::NeedsProductUserID", (int64)EEOSResult::NeedsProductUserID },
				{ "EEOSResult::NeedsInvitedID", (int64)EEOSResult::NeedsInvitedID },
				{ "EEOSResult::WrongPermission", (int64)EEOSResult::WrongPermission },
				{ "EEOSResult::TargetUserIsOwn", (int64)EEOSResult::TargetUserIsOwn },
				{ "EEOSResult::NotSessionOwner", (int64)EEOSResult::NotSessionOwner },
				{ "EEOSResult::RequestSendPacketFailed", (int64)EEOSResult::RequestSendPacketFailed },
				{ "EEOSResult::NeedsImplementation", (int64)EEOSResult::NeedsImplementation },
				{ "EEOSResult::MaxRetry", (int64)EEOSResult::MaxRetry },
				{ "EEOSResult::LockedTheList", (int64)EEOSResult::LockedTheList },
				{ "EEOSResult::ReplyPacketIsEmpty", (int64)EEOSResult::ReplyPacketIsEmpty },
				{ "EEOSResult::FileNotFound", (int64)EEOSResult::FileNotFound },
				{ "EEOSResult::FileIsEmpty", (int64)EEOSResult::FileIsEmpty },
				{ "EEOSResult::FileOpenFailed", (int64)EEOSResult::FileOpenFailed },
				{ "EEOSResult::FileReadFailed", (int64)EEOSResult::FileReadFailed },
				{ "EEOSResult::FileWriteFailed", (int64)EEOSResult::FileWriteFailed },
				{ "EEOSResult::CreateDirectoryFailed", (int64)EEOSResult::CreateDirectoryFailed },
				{ "EEOSResult::FatalError", (int64)EEOSResult::FatalError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyContaintsData.Name", "EEOSResult::AlreadyContaintsData" },
				{ "AlreadyContaintsInstance.Name", "EEOSResult::AlreadyContaintsInstance" },
				{ "AlreadyContaintsUser.Name", "EEOSResult::AlreadyContaintsUser" },
				{ "AlreadyInitialized.Name", "EEOSResult::AlreadyInitialized" },
				{ "AlreadyRegistered.Name", "EEOSResult::AlreadyRegistered" },
				{ "AlreadyReleased.Name", "EEOSResult::AlreadyReleased" },
				{ "AlreadyStarted.Name", "EEOSResult::AlreadyStarted" },
				{ "AlreadyStoped.Name", "EEOSResult::AlreadyStoped" },
				{ "BlueprintType", "true" },
				{ "ContainsNoData.Name", "EEOSResult::ContainsNoData" },
				{ "ContainsNoInstance.Name", "EEOSResult::ContainsNoInstance" },
				{ "ContainsNoUser.Name", "EEOSResult::ContainsNoUser" },
				{ "ConvertStringFailed.Name", "EEOSResult::ConvertStringFailed" },
				{ "CreateDirectoryFailed.Name", "EEOSResult::CreateDirectoryFailed" },
				{ "EOSSDKInternalError.Name", "EEOSResult::EOSSDKInternalError" },
				{ "FatalError.Name", "EEOSResult::FatalError" },
				{ "FileIsEmpty.Name", "EEOSResult::FileIsEmpty" },
				{ "FileNotFound.Name", "EEOSResult::FileNotFound" },
				{ "FileOpenFailed.Name", "EEOSResult::FileOpenFailed" },
				{ "FileReadFailed.Name", "EEOSResult::FileReadFailed" },
				{ "FileWriteFailed.Name", "EEOSResult::FileWriteFailed" },
				{ "IncommoingNotAcceptSocketID.Name", "EEOSResult::IncommoingNotAcceptSocketID" },
				{ "InsufficientMemory.Name", "EEOSResult::InsufficientMemory" },
				{ "InternalStateError.Name", "EEOSResult::InternalStateError" },
				{ "LockedTheList.Name", "EEOSResult::LockedTheList" },
				{ "MaxRetry.Name", "EEOSResult::MaxRetry" },
				{ "ModuleRelativePath", "Public/EEOSResult.h" },
				{ "NeedsEpicAccountID.Name", "EEOSResult::NeedsEpicAccountID" },
				{ "NeedsEpicLocalAccountID.Name", "EEOSResult::NeedsEpicLocalAccountID" },
				{ "NeedsImplementation.Name", "EEOSResult::NeedsImplementation" },
				{ "NeedsInvitedID.Name", "EEOSResult::NeedsInvitedID" },
				{ "NeedsProductUserID.Name", "EEOSResult::NeedsProductUserID" },
				{ "NotSessionOwner.Name", "EEOSResult::NotSessionOwner" },
				{ "PermissionDeniedByDevPortal.Name", "EEOSResult::PermissionDeniedByDevPortal" },
				{ "QueryResultIsError.Name", "EEOSResult::QueryResultIsError" },
				{ "ReplyPacketIsEmpty.Name", "EEOSResult::ReplyPacketIsEmpty" },
				{ "RequestSendPacketFailed.Name", "EEOSResult::RequestSendPacketFailed" },
				{ "Success.Name", "EEOSResult::Success" },
				{ "TargetUserIsOwn.Name", "EEOSResult::TargetUserIsOwn" },
				{ "UnknownChannelID.Name", "EEOSResult::UnknownChannelID" },
				{ "WrongArgument.Name", "EEOSResult::WrongArgument" },
				{ "WrongEOSHandle.Name", "EEOSResult::WrongEOSHandle" },
				{ "WrongFormat.Name", "EEOSResult::WrongFormat" },
				{ "WrongHandle.Name", "EEOSResult::WrongHandle" },
				{ "WrongInstance.Name", "EEOSResult::WrongInstance" },
				{ "WrongInternalStatus.Name", "EEOSResult::WrongInternalStatus" },
				{ "WrongPermission.Name", "EEOSResult::WrongPermission" },
				{ "WrongString.Name", "EEOSResult::WrongString" },
				{ "WrongTargetUser.Name", "EEOSResult::WrongTargetUser" },
				{ "WrongType.Name", "EEOSResult::WrongType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSResult",
				"EEOSResult",
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
