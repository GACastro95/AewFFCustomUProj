// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayer() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics
	{
		struct ManaPlayer_eventOnFrameUpdatedDelegate_Parms
		{
			int32 FrameNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOnFrameUpdatedDelegate_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::NewProp_FrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OnFrameUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(ManaPlayer_eventOnFrameUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UManaPlayer::execBindOnFrameUpdated)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindOnFrameUpdated(FOnFrameUpdatedDelegate(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execDisableTrack)
	{
		P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisableTrack(EManaPlayerTrack(Z_Param_TrackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetMovieFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMovieFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetMovieSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->GetMovieSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetMovieTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetMovieTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetPlaylistIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaylistIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManaComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaTexture**)Z_Param__Result=P_THIS->GetTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execGetVolume)
	{
		P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume(EManaPlayerTrack(Z_Param_TrackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentFrameOnTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFrameNumber);
		P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleManaComponentFrameOnTime(Z_Param_InFrameNumber,Z_Param_InManaComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentMovieChanged)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_InManaMovie);
		P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleManaComponentMovieChanged(Z_Param_InManaMovie,Z_Param_InManaComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentPlayerDestroyed)
	{
		P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleManaComponentPlayerDestroyed(Z_Param_InManaComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentSeekCompleted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFrameNumber);
		P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleManaComponentSeekCompleted(Z_Param_InFrameNumber,Z_Param_InManaComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHandleManaComponentStatusChanged)
	{
		P_GET_ENUM(EManaComponentStatus,Z_Param_Status);
		P_GET_OBJECT(UManaComponent,Z_Param_InManaComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleManaComponentStatusChanged(EManaComponentStatus(Z_Param_Status),Z_Param_InManaComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execHasError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsPreparing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreparing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execIsSeeking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSeeking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Next();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execOpenMovieSource)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_InManaMovie);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMovieSource(Z_Param_InManaMovie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execOpenPlaylist)
	{
		P_GET_OBJECT(UManaPlaylist,Z_Param_InPlaylist);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylist(Z_Param_InPlaylist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execOpenPlaylistIndex)
	{
		P_GET_OBJECT(UManaPlaylist,Z_Param_InPlaylist);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execOpenSourceWithOptions)
	{
		P_GET_OBJECT(UManaSource,Z_Param_ManaSource);
		P_GET_STRUCT_REF(FManaPlayerOptions,Z_Param_Out_PlayerOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenSourceWithOptions(Z_Param_ManaSource,Z_Param_Out_PlayerOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execPlayAndSeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAndSeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Previous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execReopen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Reopen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execRewind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Rewind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSeek)
	{
		P_GET_STRUCT(FTimespan,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSelectTrack)
	{
		P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectTrack(EManaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_Looping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSetRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSetTexture)
	{
		P_GET_OBJECT(UManaTexture,Z_Param_InManaTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_InManaTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSetTimeSyncedSource)
	{
		P_GET_OBJECT(UAtomComponent,Z_Param_SyncedSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeSyncedSource(Z_Param_SyncedSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlayer::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_ENUM(EManaPlayerTrack,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVolume(Z_Param_Volume,EManaPlayerTrack(Z_Param_TrackType));
		P_NATIVE_END;
	}
	void UManaPlayer::StaticRegisterNativesUManaPlayer()
	{
		UClass* Class = UManaPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindOnFrameUpdated", &UManaPlayer::execBindOnFrameUpdated },
			{ "Close", &UManaPlayer::execClose },
			{ "DisableTrack", &UManaPlayer::execDisableTrack },
			{ "GetDuration", &UManaPlayer::execGetDuration },
			{ "GetFrames", &UManaPlayer::execGetFrames },
			{ "GetMovieFrames", &UManaPlayer::execGetMovieFrames },
			{ "GetMovieSource", &UManaPlayer::execGetMovieSource },
			{ "GetMovieTime", &UManaPlayer::execGetMovieTime },
			{ "GetPlaylistIndex", &UManaPlayer::execGetPlaylistIndex },
			{ "GetRate", &UManaPlayer::execGetRate },
			{ "GetStatus", &UManaPlayer::execGetStatus },
			{ "GetTexture", &UManaPlayer::execGetTexture },
			{ "GetTime", &UManaPlayer::execGetTime },
			{ "GetVolume", &UManaPlayer::execGetVolume },
			{ "HandleManaComponentFrameOnTime", &UManaPlayer::execHandleManaComponentFrameOnTime },
			{ "HandleManaComponentMovieChanged", &UManaPlayer::execHandleManaComponentMovieChanged },
			{ "HandleManaComponentPlayerDestroyed", &UManaPlayer::execHandleManaComponentPlayerDestroyed },
			{ "HandleManaComponentSeekCompleted", &UManaPlayer::execHandleManaComponentSeekCompleted },
			{ "HandleManaComponentStatusChanged", &UManaPlayer::execHandleManaComponentStatusChanged },
			{ "HasError", &UManaPlayer::execHasError },
			{ "IsClosed", &UManaPlayer::execIsClosed },
			{ "IsLooping", &UManaPlayer::execIsLooping },
			{ "IsPaused", &UManaPlayer::execIsPaused },
			{ "IsPlaying", &UManaPlayer::execIsPlaying },
			{ "IsPreparing", &UManaPlayer::execIsPreparing },
			{ "IsReady", &UManaPlayer::execIsReady },
			{ "IsSeeking", &UManaPlayer::execIsSeeking },
			{ "Next", &UManaPlayer::execNext },
			{ "OpenMovieSource", &UManaPlayer::execOpenMovieSource },
			{ "OpenPlaylist", &UManaPlayer::execOpenPlaylist },
			{ "OpenPlaylistIndex", &UManaPlayer::execOpenPlaylistIndex },
			{ "OpenSourceWithOptions", &UManaPlayer::execOpenSourceWithOptions },
			{ "Pause", &UManaPlayer::execPause },
			{ "Play", &UManaPlayer::execPlay },
			{ "PlayAndSeek", &UManaPlayer::execPlayAndSeek },
			{ "Previous", &UManaPlayer::execPrevious },
			{ "Reopen", &UManaPlayer::execReopen },
			{ "Rewind", &UManaPlayer::execRewind },
			{ "Seek", &UManaPlayer::execSeek },
			{ "SelectTrack", &UManaPlayer::execSelectTrack },
			{ "SetLooping", &UManaPlayer::execSetLooping },
			{ "SetRate", &UManaPlayer::execSetRate },
			{ "SetTexture", &UManaPlayer::execSetTexture },
			{ "SetTimeSyncedSource", &UManaPlayer::execSetTimeSyncedSource },
			{ "SetVolume", &UManaPlayer::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics
	{
		struct ManaPlayer_eventBindOnFrameUpdated_Parms
		{
			FScriptDelegate Event;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventBindOnFrameUpdated_Parms, Event), Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "BindOnFrameUpdated", nullptr, nullptr, sizeof(ManaPlayer_eventBindOnFrameUpdated_Parms), Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics
	{
		struct ManaPlayer_eventDisableTrack_Parms
		{
			EManaPlayerTrack TrackType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventDisableTrack_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventDisableTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventDisableTrack_Parms), &Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_TrackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "DisableTrack", nullptr, nullptr, sizeof(ManaPlayer_eventDisableTrack_Parms), Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_DisableTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_DisableTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetDuration_Statics
	{
		struct ManaPlayer_eventGetDuration_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetDuration", nullptr, nullptr, sizeof(ManaPlayer_eventGetDuration_Parms), Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetFrames_Statics
	{
		struct ManaPlayer_eventGetFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetFrames", nullptr, nullptr, sizeof(ManaPlayer_eventGetFrames_Parms), Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics
	{
		struct ManaPlayer_eventGetMovieFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieFrames", nullptr, nullptr, sizeof(ManaPlayer_eventGetMovieFrames_Parms), Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics
	{
		struct ManaPlayer_eventGetMovieSource_Parms
		{
			UManaMovie* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieSource_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieSource", nullptr, nullptr, sizeof(ManaPlayer_eventGetMovieSource_Parms), Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics
	{
		struct ManaPlayer_eventGetMovieTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetMovieTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetMovieTime", nullptr, nullptr, sizeof(ManaPlayer_eventGetMovieTime_Parms), Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetMovieTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetMovieTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics
	{
		struct ManaPlayer_eventGetPlaylistIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetPlaylistIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetPlaylistIndex", nullptr, nullptr, sizeof(ManaPlayer_eventGetPlaylistIndex_Parms), Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetRate_Statics
	{
		struct ManaPlayer_eventGetRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_GetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetRate", nullptr, nullptr, sizeof(ManaPlayer_eventGetRate_Parms), Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetStatus_Statics
	{
		struct ManaPlayer_eventGetStatus_Parms
		{
			EManaComponentStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetStatus", nullptr, nullptr, sizeof(ManaPlayer_eventGetStatus_Parms), Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetTexture_Statics
	{
		struct ManaPlayer_eventGetTexture_Parms
		{
			UManaTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTexture", nullptr, nullptr, sizeof(ManaPlayer_eventGetTexture_Parms), Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetTime_Statics
	{
		struct ManaPlayer_eventGetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetTime", nullptr, nullptr, sizeof(ManaPlayer_eventGetTime_Parms), Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_GetVolume_Statics
	{
		struct ManaPlayer_eventGetVolume_Parms
		{
			EManaPlayerTrack TrackType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetVolume_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_TrackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "GetVolume", nullptr, nullptr, sizeof(ManaPlayer_eventGetVolume_Parms), Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics
	{
		struct ManaPlayer_eventHandleManaComponentFrameOnTime_Parms
		{
			int32 InFrameNumber;
			UManaComponent* InManaComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentFrameOnTime_Parms, InFrameNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentFrameOnTime_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InFrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::NewProp_InManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentFrameOnTime", nullptr, nullptr, sizeof(ManaPlayer_eventHandleManaComponentFrameOnTime_Parms), Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics
	{
		struct ManaPlayer_eventHandleManaComponentMovieChanged_Parms
		{
			UManaMovie* InManaMovie;
			UManaComponent* InManaComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaMovie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaMovie = { "InManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentMovieChanged_Parms, InManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentMovieChanged_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::NewProp_InManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentMovieChanged", nullptr, nullptr, sizeof(ManaPlayer_eventHandleManaComponentMovieChanged_Parms), Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics
	{
		struct ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms
		{
			UManaComponent* InManaComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::NewProp_InManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentPlayerDestroyed", nullptr, nullptr, sizeof(ManaPlayer_eventHandleManaComponentPlayerDestroyed_Parms), Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics
	{
		struct ManaPlayer_eventHandleManaComponentSeekCompleted_Parms
		{
			int32 InFrameNumber;
			UManaComponent* InManaComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentSeekCompleted_Parms, InFrameNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentSeekCompleted_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InFrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::NewProp_InManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentSeekCompleted", nullptr, nullptr, sizeof(ManaPlayer_eventHandleManaComponentSeekCompleted_Parms), Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics
	{
		struct ManaPlayer_eventHandleManaComponentStatusChanged_Parms
		{
			EManaComponentStatus Status;
			UManaComponent* InManaComponent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent = { "InManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventHandleManaComponentStatusChanged_Parms, InManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::NewProp_InManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HandleManaComponentStatusChanged", nullptr, nullptr, sizeof(ManaPlayer_eventHandleManaComponentStatusChanged_Parms), Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_HasError_Statics
	{
		struct ManaPlayer_eventHasError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventHasError_Parms), &Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_HasError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_HasError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "HasError", nullptr, nullptr, sizeof(ManaPlayer_eventHasError_Parms), Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HasError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_HasError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_HasError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_HasError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_HasError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsClosed_Statics
	{
		struct ManaPlayer_eventIsClosed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsClosed_Parms), &Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsClosed", nullptr, nullptr, sizeof(ManaPlayer_eventIsClosed_Parms), Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsLooping_Statics
	{
		struct ManaPlayer_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsLooping", nullptr, nullptr, sizeof(ManaPlayer_eventIsLooping_Parms), Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsPaused_Statics
	{
		struct ManaPlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(ManaPlayer_eventIsPaused_Parms), Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics
	{
		struct ManaPlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(ManaPlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics
	{
		struct ManaPlayer_eventIsPreparing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsPreparing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsPreparing_Parms), &Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsPreparing", nullptr, nullptr, sizeof(ManaPlayer_eventIsPreparing_Parms), Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsPreparing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsPreparing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsReady_Statics
	{
		struct ManaPlayer_eventIsReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsReady_Parms), &Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsReady", nullptr, nullptr, sizeof(ManaPlayer_eventIsReady_Parms), Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics
	{
		struct ManaPlayer_eventIsSeeking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventIsSeeking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventIsSeeking_Parms), &Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "IsSeeking", nullptr, nullptr, sizeof(ManaPlayer_eventIsSeeking_Parms), Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_IsSeeking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_IsSeeking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Next_Statics
	{
		struct ManaPlayer_eventNext_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventNext_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventNext_Parms), &Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Next_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Next_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Next", nullptr, nullptr, sizeof(ManaPlayer_eventNext_Parms), Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Next_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics
	{
		struct ManaPlayer_eventOpenMovieSource_Parms
		{
			UManaMovie* InManaMovie;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::NewProp_InManaMovie = { "InManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenMovieSource_Parms, InManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::NewProp_InManaMovie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenMovieSource", nullptr, nullptr, sizeof(ManaPlayer_eventOpenMovieSource_Parms), Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_OpenMovieSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenMovieSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics
	{
		struct ManaPlayer_eventOpenPlaylist_Parms
		{
			UManaPlaylist* InPlaylist;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylist_Parms, InPlaylist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventOpenPlaylist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenPlaylist_Parms), &Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenPlaylist", nullptr, nullptr, sizeof(ManaPlayer_eventOpenPlaylist_Parms), Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_OpenPlaylist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenPlaylist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics
	{
		struct ManaPlayer_eventOpenPlaylistIndex_Parms
		{
			UManaPlaylist* InPlaylist;
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylistIndex_Parms, InPlaylist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenPlaylistIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventOpenPlaylistIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenPlaylistIndex_Parms), &Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenPlaylistIndex", nullptr, nullptr, sizeof(ManaPlayer_eventOpenPlaylistIndex_Parms), Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics
	{
		struct ManaPlayer_eventOpenSourceWithOptions_Parms
		{
			UManaSource* ManaSource;
			FManaPlayerOptions PlayerOptions;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenSourceWithOptions_Parms, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions = { "PlayerOptions", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventOpenSourceWithOptions_Parms, PlayerOptions), Z_Construct_UScriptStruct_FManaPlayerOptions, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions_MetaData)) };
	void Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventOpenSourceWithOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventOpenSourceWithOptions_Parms), &Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ManaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_PlayerOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "OpenSourceWithOptions", nullptr, nullptr, sizeof(ManaPlayer_eventOpenSourceWithOptions_Parms), Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Pause_Statics
	{
		struct ManaPlayer_eventPause_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventPause_Parms), &Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Pause", nullptr, nullptr, sizeof(ManaPlayer_eventPause_Parms), Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Play_Statics
	{
		struct ManaPlayer_eventPlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventPlay_Parms), &Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Play", nullptr, nullptr, sizeof(ManaPlayer_eventPlay_Parms), Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "PlayAndSeek", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_PlayAndSeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_PlayAndSeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Previous_Statics
	{
		struct ManaPlayer_eventPrevious_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventPrevious_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventPrevious_Parms), &Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Previous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Previous_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Previous", nullptr, nullptr, sizeof(ManaPlayer_eventPrevious_Parms), Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Previous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Previous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Previous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Previous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Previous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Reopen_Statics
	{
		struct ManaPlayer_eventReopen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventReopen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventReopen_Parms), &Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Reopen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Reopen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Reopen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Reopen", nullptr, nullptr, sizeof(ManaPlayer_eventReopen_Parms), Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Reopen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Reopen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Reopen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Rewind_Statics
	{
		struct ManaPlayer_eventRewind_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventRewind_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventRewind_Parms), &Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Rewind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Rewind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Rewind", nullptr, nullptr, sizeof(ManaPlayer_eventRewind_Parms), Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Rewind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Rewind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Rewind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_Seek_Statics
	{
		struct ManaPlayer_eventSeek_Parms
		{
			FTimespan Time;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSeek_Parms), &Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_Seek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "Seek", nullptr, nullptr, sizeof(ManaPlayer_eventSeek_Parms), Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics
	{
		struct ManaPlayer_eventSelectTrack_Parms
		{
			EManaPlayerTrack TrackType;
			int32 TrackIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSelectTrack_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSelectTrack_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventSelectTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSelectTrack_Parms), &Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_TrackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SelectTrack", nullptr, nullptr, sizeof(ManaPlayer_eventSelectTrack_Parms), Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SelectTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SelectTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SetLooping_Statics
	{
		struct ManaPlayer_eventSetLooping_Parms
		{
			bool Looping;
			bool ReturnValue;
		};
		static void NewProp_Looping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((ManaPlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_Looping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetLooping", nullptr, nullptr, sizeof(ManaPlayer_eventSetLooping_Parms), Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SetRate_Statics
	{
		struct ManaPlayer_eventSetRate_Parms
		{
			float Rate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventSetRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSetRate_Parms), &Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetRate", nullptr, nullptr, sizeof(ManaPlayer_eventSetRate_Parms), Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SetTexture_Statics
	{
		struct ManaPlayer_eventSetTexture_Parms
		{
			UManaTexture* InManaTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManaTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::NewProp_InManaTexture = { "InManaTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSetTexture_Parms, InManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::NewProp_InManaTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetTexture", nullptr, nullptr, sizeof(ManaPlayer_eventSetTexture_Parms), Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics
	{
		struct ManaPlayer_eventSetTimeSyncedSource_Parms
		{
			UAtomComponent* SyncedSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncedSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SyncedSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource = { "SyncedSource", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSetTimeSyncedSource_Parms, SyncedSource), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::NewProp_SyncedSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetTimeSyncedSource", nullptr, nullptr, sizeof(ManaPlayer_eventSetTimeSyncedSource_Parms), Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlayer_SetVolume_Statics
	{
		struct ManaPlayer_eventSetVolume_Parms
		{
			float Volume;
			EManaPlayerTrack TrackType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlayer_eventSetVolume_Parms, TrackType), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlayer_eventSetVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlayer_eventSetVolume_Parms), &Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_TrackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlayer, nullptr, "SetVolume", nullptr, nullptr, sizeof(ManaPlayer_eventSetVolume_Parms), Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlayer_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlayer_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaPlayer_NoRegister()
	{
		return UManaPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UManaPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[];
#endif
		static void NewProp_PlayOnOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayOnOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static void NewProp_Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieOpened_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieOpenFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieOpenFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackResumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackResumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackSuspended_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackSuspended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeekCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTracksChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTracksChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaMovie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Playlist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaPlayer_BindOnFrameUpdated, "BindOnFrameUpdated" }, // 461456183
		{ &Z_Construct_UFunction_UManaPlayer_Close, "Close" }, // 1949966365
		{ &Z_Construct_UFunction_UManaPlayer_DisableTrack, "DisableTrack" }, // 3383893845
		{ &Z_Construct_UFunction_UManaPlayer_GetDuration, "GetDuration" }, // 539871867
		{ &Z_Construct_UFunction_UManaPlayer_GetFrames, "GetFrames" }, // 514330362
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieFrames, "GetMovieFrames" }, // 820404593
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieSource, "GetMovieSource" }, // 2160943949
		{ &Z_Construct_UFunction_UManaPlayer_GetMovieTime, "GetMovieTime" }, // 2291405671
		{ &Z_Construct_UFunction_UManaPlayer_GetPlaylistIndex, "GetPlaylistIndex" }, // 307467739
		{ &Z_Construct_UFunction_UManaPlayer_GetRate, "GetRate" }, // 1800294168
		{ &Z_Construct_UFunction_UManaPlayer_GetStatus, "GetStatus" }, // 2788755569
		{ &Z_Construct_UFunction_UManaPlayer_GetTexture, "GetTexture" }, // 3200701947
		{ &Z_Construct_UFunction_UManaPlayer_GetTime, "GetTime" }, // 1806813487
		{ &Z_Construct_UFunction_UManaPlayer_GetVolume, "GetVolume" }, // 3167798283
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentFrameOnTime, "HandleManaComponentFrameOnTime" }, // 3411319594
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentMovieChanged, "HandleManaComponentMovieChanged" }, // 2726939380
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentPlayerDestroyed, "HandleManaComponentPlayerDestroyed" }, // 4153456356
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentSeekCompleted, "HandleManaComponentSeekCompleted" }, // 434863
		{ &Z_Construct_UFunction_UManaPlayer_HandleManaComponentStatusChanged, "HandleManaComponentStatusChanged" }, // 2571068077
		{ &Z_Construct_UFunction_UManaPlayer_HasError, "HasError" }, // 1613358260
		{ &Z_Construct_UFunction_UManaPlayer_IsClosed, "IsClosed" }, // 2173975609
		{ &Z_Construct_UFunction_UManaPlayer_IsLooping, "IsLooping" }, // 3113794037
		{ &Z_Construct_UFunction_UManaPlayer_IsPaused, "IsPaused" }, // 3169188130
		{ &Z_Construct_UFunction_UManaPlayer_IsPlaying, "IsPlaying" }, // 3696282379
		{ &Z_Construct_UFunction_UManaPlayer_IsPreparing, "IsPreparing" }, // 4280946399
		{ &Z_Construct_UFunction_UManaPlayer_IsReady, "IsReady" }, // 1149133798
		{ &Z_Construct_UFunction_UManaPlayer_IsSeeking, "IsSeeking" }, // 620401449
		{ &Z_Construct_UFunction_UManaPlayer_Next, "Next" }, // 1803923558
		{ &Z_Construct_UDelegateFunction_UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature, "OnFrameUpdatedDelegate__DelegateSignature" }, // 2037067275
		{ &Z_Construct_UFunction_UManaPlayer_OpenMovieSource, "OpenMovieSource" }, // 1658875602
		{ &Z_Construct_UFunction_UManaPlayer_OpenPlaylist, "OpenPlaylist" }, // 4243604454
		{ &Z_Construct_UFunction_UManaPlayer_OpenPlaylistIndex, "OpenPlaylistIndex" }, // 3561964409
		{ &Z_Construct_UFunction_UManaPlayer_OpenSourceWithOptions, "OpenSourceWithOptions" }, // 3265118245
		{ &Z_Construct_UFunction_UManaPlayer_Pause, "Pause" }, // 1304605436
		{ &Z_Construct_UFunction_UManaPlayer_Play, "Play" }, // 3940791595
		{ &Z_Construct_UFunction_UManaPlayer_PlayAndSeek, "PlayAndSeek" }, // 1222990228
		{ &Z_Construct_UFunction_UManaPlayer_Previous, "Previous" }, // 2951294590
		{ &Z_Construct_UFunction_UManaPlayer_Reopen, "Reopen" }, // 25236846
		{ &Z_Construct_UFunction_UManaPlayer_Rewind, "Rewind" }, // 2852634068
		{ &Z_Construct_UFunction_UManaPlayer_Seek, "Seek" }, // 1176932850
		{ &Z_Construct_UFunction_UManaPlayer_SelectTrack, "SelectTrack" }, // 1294615009
		{ &Z_Construct_UFunction_UManaPlayer_SetLooping, "SetLooping" }, // 4271976190
		{ &Z_Construct_UFunction_UManaPlayer_SetRate, "SetRate" }, // 1796269077
		{ &Z_Construct_UFunction_UManaPlayer_SetTexture, "SetTexture" }, // 2156505626
		{ &Z_Construct_UFunction_UManaPlayer_SetTimeSyncedSource, "SetTimeSyncedSource" }, // 3594633210
		{ &Z_Construct_UFunction_UManaPlayer_SetVolume, "SetVolume" }, // 1772945889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_SetBit(void* Obj)
	{
		((UManaPlayer*)Obj)->PlayOnOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaPlayer), &Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((UManaPlayer*)Obj)->Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UManaPlayer), &Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached = { "OnEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnEndReached), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed = { "OnMovieClosed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnMovieClosed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened = { "OnMovieOpened", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnMovieOpened), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpened__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed = { "OnMovieOpenFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnMovieOpenFailed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed = { "OnPlaybackResumed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnPlaybackResumed), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended = { "OnPlaybackSuspended", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnPlaybackSuspended), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted = { "OnSeekCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnSeekCompleted), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged = { "OnTracksChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, OnTracksChanged), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, Playlist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, PlaylistIndex), METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlayer, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlayOnOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_MaxFrameDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnMovieOpenFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackResumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnPlaybackSuspended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnSeekCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_OnTracksChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_Playlist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_PlaylistIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlayer_Statics::NewProp_ManaComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManaPlayer_Statics::ClassParams = {
		&UManaPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManaPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManaPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaPlayer, 1696361840);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaPlayer>()
	{
		return UManaPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaPlayer(Z_Construct_UClass_UManaPlayer, &UManaPlayer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
