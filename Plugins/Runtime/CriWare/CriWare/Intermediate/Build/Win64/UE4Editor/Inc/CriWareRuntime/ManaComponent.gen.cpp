// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnEventPoint_Parms
		{
			FManaEventPointInfo EventPointInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPointInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo = { "EventPointInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnEventPoint__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnEventPoint_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnFrameOnTime_Parms
		{
			int32 FrameNumber;
			UManaComponent* ManaComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnFrameOnTime_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnFrameOnTime_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnFrameOnTime__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnFrameOnTime_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnMovieChanged_Parms
		{
			UManaMovie* Movie;
			UManaComponent* ManaComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_Movie = { "Movie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnMovieChanged_Parms, Movie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnMovieChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_Movie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnMovieChanged__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnMovieChanged_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnPlayerDestroyed_Parms
		{
			UManaComponent* ManaComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnPlayerDestroyed_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnPlayerDestroyed__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnPlayerDestroyed_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnRequestData_Parms
		{
			UManaComponent* ManaComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnRequestData_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnRequestData__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnRequestData_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnSeekCompleted_Parms
		{
			int32 FrameNumber;
			UManaComponent* ManaComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnSeekCompleted_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnSeekCompleted_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnSeekCompleted__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnSeekCompleted_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnStatusChanged_Parms
		{
			EManaComponentStatus Status;
			UManaComponent* ManaComponent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnStatusChanged_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnSubtitleChanged_Parms
		{
			FText Subtitle;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnSubtitleChanged__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnSubtitleChanged_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics
	{
		struct ManaComponent_eventOnTrackChanged_Parms
		{
			int32 TrackNumber;
			UManaComponent* ManaComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_TrackNumber = { "TrackNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnTrackChanged_Parms, TrackNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventOnTrackChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_TrackNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::NewProp_ManaComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "OnTrackChanged__DelegateSignature", nullptr, nullptr, sizeof(ManaComponent_eventOnTrackChanged_Parms), Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UManaComponent::execAdvanceTime)
	{
		P_GET_STRUCT(FTimespan,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceTime(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execChangeSubtitlesChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSubtitlesChannel(Z_Param_Channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execChangeSubtitlesEncoding)
	{
		P_GET_ENUM(EManaSubtitlesEncoding,Z_Param_Encoding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSubtitlesEncoding(EManaSubtitlesEncoding(Z_Param_Encoding));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execEnableSeamless)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSeamless(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execEnableSubtitles)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSubtitles(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetExtraVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExtraVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetMovieTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetMovieTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->GetSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManaComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetSubVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSubVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaTexture**)Z_Param__Result=P_THIS->GetTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execIsPreparing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreparing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execLoop)
	{
		P_GET_UBOOL(Z_Param_bInLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Loop(Z_Param_bInLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Next();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execPause)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execPreparePlaylistIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreparePlaylistIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Previous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execRemoveAudioCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAudioCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execRemoveExtraAudioCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExtraAudioCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execRemoveSubAudioCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSubAudioCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSeek)
	{
		P_GET_STRUCT(FTimespan,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Seek(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSeekToPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekToPosition(Z_Param_FrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetAlphaTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlphaTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetAudioCategory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioCategory(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetEndFrameAction)
	{
		P_GET_ENUM(EManaFrameAction,Z_Param_InFrameAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndFrameAction(EManaFrameAction(Z_Param_InFrameAction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetExtraAudioCategory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtraAudioCategory(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetExtraAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtraAudioTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetExtraVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtraVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MovieFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFile(Z_Param_MovieFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetMaxDropFrames)
	{
		P_GET_ENUM(EManaMaxFrameDrop,Z_Param_InMaxDropFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDropFrames(EManaMaxFrameDrop(Z_Param_InMaxDropFrames));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetMovie)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_InMovie);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovie(Z_Param_InMovie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetPlaybackTimer)
	{
		P_GET_ENUM(EManaPlaybackTimer,Z_Param_InPlaybackTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackTimer(EManaPlaybackTimer(Z_Param_InPlaybackTimer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetSubAudioCategory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubAudioCategory(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetSubAudioSendLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_ENUM(EAtomSpeakerID,Z_Param_SpeakerId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubAudioSendLevel(Z_Param_Channel,EAtomSpeakerID(Z_Param_SpeakerId),Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetSubAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubAudioTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetSubVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetTexture)
	{
		P_GET_OBJECT(UManaTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execToIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void UManaComponent::StaticRegisterNativesUManaComponent()
	{
		UClass* Class = UManaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceTime", &UManaComponent::execAdvanceTime },
			{ "ChangeSubtitlesChannel", &UManaComponent::execChangeSubtitlesChannel },
			{ "ChangeSubtitlesEncoding", &UManaComponent::execChangeSubtitlesEncoding },
			{ "EnableSeamless", &UManaComponent::execEnableSeamless },
			{ "EnableSubtitles", &UManaComponent::execEnableSubtitles },
			{ "GetExtraVolume", &UManaComponent::execGetExtraVolume },
			{ "GetFrameNumber", &UManaComponent::execGetFrameNumber },
			{ "GetMovieTime", &UManaComponent::execGetMovieTime },
			{ "GetPosition", &UManaComponent::execGetPosition },
			{ "GetSource", &UManaComponent::execGetSource },
			{ "GetStatus", &UManaComponent::execGetStatus },
			{ "GetSubVolume", &UManaComponent::execGetSubVolume },
			{ "GetTexture", &UManaComponent::execGetTexture },
			{ "GetTime", &UManaComponent::execGetTime },
			{ "GetVolume", &UManaComponent::execGetVolume },
			{ "IsLooping", &UManaComponent::execIsLooping },
			{ "IsPaused", &UManaComponent::execIsPaused },
			{ "IsPlaying", &UManaComponent::execIsPlaying },
			{ "IsPreparing", &UManaComponent::execIsPreparing },
			{ "IsReady", &UManaComponent::execIsReady },
			{ "Loop", &UManaComponent::execLoop },
			{ "Next", &UManaComponent::execNext },
			{ "Pause", &UManaComponent::execPause },
			{ "Play", &UManaComponent::execPlay },
			{ "Prepare", &UManaComponent::execPrepare },
			{ "PreparePlaylistIndex", &UManaComponent::execPreparePlaylistIndex },
			{ "Previous", &UManaComponent::execPrevious },
			{ "RemoveAudioCategory", &UManaComponent::execRemoveAudioCategory },
			{ "RemoveExtraAudioCategory", &UManaComponent::execRemoveExtraAudioCategory },
			{ "RemoveSubAudioCategory", &UManaComponent::execRemoveSubAudioCategory },
			{ "Seek", &UManaComponent::execSeek },
			{ "SeekToPosition", &UManaComponent::execSeekToPosition },
			{ "SetAlphaTrack", &UManaComponent::execSetAlphaTrack },
			{ "SetAudioCategory", &UManaComponent::execSetAudioCategory },
			{ "SetAudioTrack", &UManaComponent::execSetAudioTrack },
			{ "SetEndFrameAction", &UManaComponent::execSetEndFrameAction },
			{ "SetExtraAudioCategory", &UManaComponent::execSetExtraAudioCategory },
			{ "SetExtraAudioTrack", &UManaComponent::execSetExtraAudioTrack },
			{ "SetExtraVolume", &UManaComponent::execSetExtraVolume },
			{ "SetFile", &UManaComponent::execSetFile },
			{ "SetMaxDropFrames", &UManaComponent::execSetMaxDropFrames },
			{ "SetMovie", &UManaComponent::execSetMovie },
			{ "SetPlaybackTimer", &UManaComponent::execSetPlaybackTimer },
			{ "SetSubAudioCategory", &UManaComponent::execSetSubAudioCategory },
			{ "SetSubAudioSendLevel", &UManaComponent::execSetSubAudioSendLevel },
			{ "SetSubAudioTrack", &UManaComponent::execSetSubAudioTrack },
			{ "SetSubVolume", &UManaComponent::execSetSubVolume },
			{ "SetTexture", &UManaComponent::execSetTexture },
			{ "SetVolume", &UManaComponent::execSetVolume },
			{ "Stop", &UManaComponent::execStop },
			{ "ToIndex", &UManaComponent::execToIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics
	{
		struct ManaComponent_eventAdvanceTime_Parms
		{
			FTimespan DeltaTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventAdvanceTime_Parms, DeltaTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "AdvanceTime", nullptr, nullptr, sizeof(ManaComponent_eventAdvanceTime_Parms), Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_AdvanceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_AdvanceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics
	{
		struct ManaComponent_eventChangeSubtitlesChannel_Parms
		{
			int32 Channel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventChangeSubtitlesChannel_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::NewProp_Channel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ChangeSubtitlesChannel", nullptr, nullptr, sizeof(ManaComponent_eventChangeSubtitlesChannel_Parms), Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics
	{
		struct ManaComponent_eventChangeSubtitlesEncoding_Parms
		{
			EManaSubtitlesEncoding Encoding;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Encoding_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Encoding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding = { "Encoding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventChangeSubtitlesEncoding_Parms, Encoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::NewProp_Encoding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ChangeSubtitlesEncoding", nullptr, nullptr, sizeof(ManaComponent_eventChangeSubtitlesEncoding_Parms), Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics
	{
		struct ManaComponent_eventEnableSeamless_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ManaComponent_eventEnableSeamless_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventEnableSeamless_Parms), &Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "EnableSeamless", nullptr, nullptr, sizeof(ManaComponent_eventEnableSeamless_Parms), Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_EnableSeamless()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_EnableSeamless_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics
	{
		struct ManaComponent_eventEnableSubtitles_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ManaComponent_eventEnableSubtitles_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventEnableSubtitles_Parms), &Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "EnableSubtitles", nullptr, nullptr, sizeof(ManaComponent_eventEnableSubtitles_Parms), Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_EnableSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics
	{
		struct ManaComponent_eventGetExtraVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetExtraVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetExtraVolume", nullptr, nullptr, sizeof(ManaComponent_eventGetExtraVolume_Parms), Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetExtraVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetExtraVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics
	{
		struct ManaComponent_eventGetFrameNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetFrameNumber", nullptr, nullptr, sizeof(ManaComponent_eventGetFrameNumber_Parms), Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics
	{
		struct ManaComponent_eventGetMovieTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetMovieTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetMovieTime", nullptr, nullptr, sizeof(ManaComponent_eventGetMovieTime_Parms), Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetMovieTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetMovieTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetPosition_Statics
	{
		struct ManaComponent_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetPosition", nullptr, nullptr, sizeof(ManaComponent_eventGetPosition_Parms), Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetSource_Statics
	{
		struct ManaComponent_eventGetSource_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetSource", nullptr, nullptr, sizeof(ManaComponent_eventGetSource_Parms), Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetStatus_Statics
	{
		struct ManaComponent_eventGetStatus_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(ManaComponent_eventGetStatus_Parms), Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics
	{
		struct ManaComponent_eventGetSubVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetSubVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetSubVolume", nullptr, nullptr, sizeof(ManaComponent_eventGetSubVolume_Parms), Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetSubVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetSubVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetTexture_Statics
	{
		struct ManaComponent_eventGetTexture_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetTexture", nullptr, nullptr, sizeof(ManaComponent_eventGetTexture_Parms), Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetTime_Statics
	{
		struct ManaComponent_eventGetTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetTime", nullptr, nullptr, sizeof(ManaComponent_eventGetTime_Parms), Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetVolume_Statics
	{
		struct ManaComponent_eventGetVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetVolume", nullptr, nullptr, sizeof(ManaComponent_eventGetVolume_Parms), Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_IsLooping_Statics
	{
		struct ManaComponent_eventIsLooping_Parms
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
	void Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsLooping", nullptr, nullptr, sizeof(ManaComponent_eventIsLooping_Parms), Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_IsPaused_Statics
	{
		struct ManaComponent_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(ManaComponent_eventIsPaused_Parms), Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_IsPlaying_Statics
	{
		struct ManaComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(ManaComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_IsPreparing_Statics
	{
		struct ManaComponent_eventIsPreparing_Parms
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
	void Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventIsPreparing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventIsPreparing_Parms), &Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsPreparing", nullptr, nullptr, sizeof(ManaComponent_eventIsPreparing_Parms), Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_IsPreparing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_IsPreparing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_IsReady_Statics
	{
		struct ManaComponent_eventIsReady_Parms
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
	void Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventIsReady_Parms), &Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_IsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_IsReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "IsReady", nullptr, nullptr, sizeof(ManaComponent_eventIsReady_Parms), Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_IsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_IsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_IsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_IsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Loop_Statics
	{
		struct ManaComponent_eventLoop_Parms
		{
			bool bInLoop;
		};
		static void NewProp_bInLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop_SetBit(void* Obj)
	{
		((ManaComponent_eventLoop_Parms*)Obj)->bInLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop = { "bInLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventLoop_Parms), &Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Loop_Statics::NewProp_bInLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Loop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Loop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Loop", nullptr, nullptr, sizeof(ManaComponent_eventLoop_Parms), Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Loop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Loop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Loop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Loop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Loop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Next_Statics
	{
		struct ManaComponent_eventNext_Parms
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
	void Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventNext_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventNext_Parms), &Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Next_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Next_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Next", nullptr, nullptr, sizeof(ManaComponent_eventNext_Parms), Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Next_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Pause_Statics
	{
		struct ManaComponent_eventPause_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((ManaComponent_eventPause_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventPause_Parms), &Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Pause_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Pause", nullptr, nullptr, sizeof(ManaComponent_eventPause_Parms), Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Prepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Prepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Prepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics
	{
		struct ManaComponent_eventPreparePlaylistIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventPreparePlaylistIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "PreparePlaylistIndex", nullptr, nullptr, sizeof(ManaComponent_eventPreparePlaylistIndex_Parms), Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Previous_Statics
	{
		struct ManaComponent_eventPrevious_Parms
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
	void Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventPrevious_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventPrevious_Parms), &Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Previous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Previous_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Previous", nullptr, nullptr, sizeof(ManaComponent_eventPrevious_Parms), Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Previous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Previous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Previous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Previous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Previous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveAudioCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_RemoveAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveExtraAudioCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "RemoveSubAudioCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Seek_Statics
	{
		struct ManaComponent_eventSeek_Parms
		{
			FTimespan Time;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaComponent_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_Seek_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Seek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Seek", nullptr, nullptr, sizeof(ManaComponent_eventSeek_Parms), Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics
	{
		struct ManaComponent_eventSeekToPosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSeekToPosition_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::NewProp_FrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SeekToPosition", nullptr, nullptr, sizeof(ManaComponent_eventSeekToPosition_Parms), Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SeekToPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics
	{
		struct ManaComponent_eventSetAlphaTrack_Parms
		{
			int32 Track;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetAlphaTrack_Parms, Track), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAlphaTrack", nullptr, nullptr, sizeof(ManaComponent_eventSetAlphaTrack_Parms), Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetAlphaTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAlphaTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics
	{
		struct ManaComponent_eventSetAudioCategory_Parms
		{
			FString CategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetAudioCategory_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAudioCategory", nullptr, nullptr, sizeof(ManaComponent_eventSetAudioCategory_Parms), Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics
	{
		struct ManaComponent_eventSetAudioTrack_Parms
		{
			int32 Track;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetAudioTrack_Parms, Track), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetAudioTrack", nullptr, nullptr, sizeof(ManaComponent_eventSetAudioTrack_Parms), Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics
	{
		struct ManaComponent_eventSetEndFrameAction_Parms
		{
			EManaFrameAction InFrameAction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InFrameAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InFrameAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction = { "InFrameAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetEndFrameAction_Parms, InFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::NewProp_InFrameAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetEndFrameAction", nullptr, nullptr, sizeof(ManaComponent_eventSetEndFrameAction_Parms), Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetEndFrameAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetEndFrameAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics
	{
		struct ManaComponent_eventSetExtraAudioCategory_Parms
		{
			FString CategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraAudioCategory_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraAudioCategory", nullptr, nullptr, sizeof(ManaComponent_eventSetExtraAudioCategory_Parms), Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics
	{
		struct ManaComponent_eventSetExtraAudioTrack_Parms
		{
			int32 Track;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraAudioTrack_Parms, Track), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraAudioTrack", nullptr, nullptr, sizeof(ManaComponent_eventSetExtraAudioTrack_Parms), Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics
	{
		struct ManaComponent_eventSetExtraVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetExtraVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetExtraVolume", nullptr, nullptr, sizeof(ManaComponent_eventSetExtraVolume_Parms), Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetExtraVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetExtraVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetFile_Statics
	{
		struct ManaComponent_eventSetFile_Parms
		{
			FString MovieFilePath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath = { "MovieFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetFile_Parms, MovieFilePath), METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetFile_Statics::NewProp_MovieFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetFile", nullptr, nullptr, sizeof(ManaComponent_eventSetFile_Parms), Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics
	{
		struct ManaComponent_eventSetMaxDropFrames_Parms
		{
			EManaMaxFrameDrop InMaxDropFrames;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMaxDropFrames_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMaxDropFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames = { "InMaxDropFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetMaxDropFrames_Parms, InMaxDropFrames), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::NewProp_InMaxDropFrames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetMaxDropFrames", nullptr, nullptr, sizeof(ManaComponent_eventSetMaxDropFrames_Parms), Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetMaxDropFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetMaxDropFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetMovie_Statics
	{
		struct ManaComponent_eventSetMovie_Parms
		{
			UManaMovie* InMovie;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_SetMovie_Statics::NewProp_InMovie = { "InMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetMovie_Parms, InMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetMovie_Statics::NewProp_InMovie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetMovie", nullptr, nullptr, sizeof(ManaComponent_eventSetMovie_Parms), Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics
	{
		struct ManaComponent_eventSetPlaybackTimer_Parms
		{
			EManaPlaybackTimer InPlaybackTimer;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlaybackTimer_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlaybackTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer = { "InPlaybackTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetPlaybackTimer_Parms, InPlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::NewProp_InPlaybackTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetPlaybackTimer", nullptr, nullptr, sizeof(ManaComponent_eventSetPlaybackTimer_Parms), Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetPlaybackTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetPlaybackTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics
	{
		struct ManaComponent_eventSetSubAudioCategory_Parms
		{
			FString CategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioCategory_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioCategory", nullptr, nullptr, sizeof(ManaComponent_eventSetSubAudioCategory_Parms), Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics
	{
		struct ManaComponent_eventSetSubAudioSendLevel_Parms
		{
			int32 Channel;
			EAtomSpeakerID SpeakerId;
			float Volume;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeakerId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, SpeakerId), Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioSendLevel_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_SpeakerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioSendLevel", nullptr, nullptr, sizeof(ManaComponent_eventSetSubAudioSendLevel_Parms), Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics
	{
		struct ManaComponent_eventSetSubAudioTrack_Parms
		{
			int32 Track;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubAudioTrack_Parms, Track), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubAudioTrack", nullptr, nullptr, sizeof(ManaComponent_eventSetSubAudioTrack_Parms), Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetSubAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics
	{
		struct ManaComponent_eventSetSubVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetSubVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetSubVolume", nullptr, nullptr, sizeof(ManaComponent_eventSetSubVolume_Parms), Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetSubVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetSubVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetTexture_Statics
	{
		struct ManaComponent_eventSetTexture_Parms
		{
			UManaTexture* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_SetTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetTexture_Parms, Texture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetTexture", nullptr, nullptr, sizeof(ManaComponent_eventSetTexture_Parms), Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_SetVolume_Statics
	{
		struct ManaComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "SetVolume", nullptr, nullptr, sizeof(ManaComponent_eventSetVolume_Parms), Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_ToIndex_Statics
	{
		struct ManaComponent_eventToIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaComponent_eventToIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaComponent_eventToIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaComponent_eventToIndex_Parms), &Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_ToIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_ToIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_ToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "ToIndex", nullptr, nullptr, sizeof(ManaComponent_eventToIndex_Parms), Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_ToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_ToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaComponent_ToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaComponent_NoRegister()
	{
		return UManaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UManaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubtitleChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubtitleChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMovieChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovieChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeekCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrackChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFrameOnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFrameOnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnRequestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Playlist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlphaTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAudioTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubAudioTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraAudioTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtraAudioTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAudioCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubAudioCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraAudioCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraAudioCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[];
#endif
		static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubtitlesEncoding_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesEncoding_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SubtitlesEncoding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaybackTimer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaybackTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaComponent_AdvanceTime, "AdvanceTime" }, // 3152879403
		{ &Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel, "ChangeSubtitlesChannel" }, // 532979835
		{ &Z_Construct_UFunction_UManaComponent_ChangeSubtitlesEncoding, "ChangeSubtitlesEncoding" }, // 1750772027
		{ &Z_Construct_UFunction_UManaComponent_EnableSeamless, "EnableSeamless" }, // 2839297233
		{ &Z_Construct_UFunction_UManaComponent_EnableSubtitles, "EnableSubtitles" }, // 2092039118
		{ &Z_Construct_UFunction_UManaComponent_GetExtraVolume, "GetExtraVolume" }, // 1128701127
		{ &Z_Construct_UFunction_UManaComponent_GetFrameNumber, "GetFrameNumber" }, // 3625194490
		{ &Z_Construct_UFunction_UManaComponent_GetMovieTime, "GetMovieTime" }, // 3333458373
		{ &Z_Construct_UFunction_UManaComponent_GetPosition, "GetPosition" }, // 2722547058
		{ &Z_Construct_UFunction_UManaComponent_GetSource, "GetSource" }, // 1619707120
		{ &Z_Construct_UFunction_UManaComponent_GetStatus, "GetStatus" }, // 4251498320
		{ &Z_Construct_UFunction_UManaComponent_GetSubVolume, "GetSubVolume" }, // 2708264070
		{ &Z_Construct_UFunction_UManaComponent_GetTexture, "GetTexture" }, // 1468070825
		{ &Z_Construct_UFunction_UManaComponent_GetTime, "GetTime" }, // 3026552416
		{ &Z_Construct_UFunction_UManaComponent_GetVolume, "GetVolume" }, // 2317628531
		{ &Z_Construct_UFunction_UManaComponent_IsLooping, "IsLooping" }, // 1488349496
		{ &Z_Construct_UFunction_UManaComponent_IsPaused, "IsPaused" }, // 151205172
		{ &Z_Construct_UFunction_UManaComponent_IsPlaying, "IsPlaying" }, // 3743958570
		{ &Z_Construct_UFunction_UManaComponent_IsPreparing, "IsPreparing" }, // 423723123
		{ &Z_Construct_UFunction_UManaComponent_IsReady, "IsReady" }, // 3026821661
		{ &Z_Construct_UFunction_UManaComponent_Loop, "Loop" }, // 620876389
		{ &Z_Construct_UFunction_UManaComponent_Next, "Next" }, // 2734144598
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, "OnEventPoint__DelegateSignature" }, // 3709883169
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature, "OnFrameOnTime__DelegateSignature" }, // 3710634758
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature, "OnMovieChanged__DelegateSignature" }, // 676937889
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature, "OnPlayerDestroyed__DelegateSignature" }, // 663754618
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, "OnRequestData__DelegateSignature" }, // 3257522139
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature, "OnSeekCompleted__DelegateSignature" }, // 4140579185
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, "OnStatusChanged__DelegateSignature" }, // 1427627701
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, "OnSubtitleChanged__DelegateSignature" }, // 956024468
		{ &Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature, "OnTrackChanged__DelegateSignature" }, // 3708016501
		{ &Z_Construct_UFunction_UManaComponent_Pause, "Pause" }, // 3074299175
		{ &Z_Construct_UFunction_UManaComponent_Play, "Play" }, // 1538047429
		{ &Z_Construct_UFunction_UManaComponent_Prepare, "Prepare" }, // 3070882218
		{ &Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex, "PreparePlaylistIndex" }, // 524491024
		{ &Z_Construct_UFunction_UManaComponent_Previous, "Previous" }, // 823353962
		{ &Z_Construct_UFunction_UManaComponent_RemoveAudioCategory, "RemoveAudioCategory" }, // 2636725631
		{ &Z_Construct_UFunction_UManaComponent_RemoveExtraAudioCategory, "RemoveExtraAudioCategory" }, // 3788822515
		{ &Z_Construct_UFunction_UManaComponent_RemoveSubAudioCategory, "RemoveSubAudioCategory" }, // 1210655183
		{ &Z_Construct_UFunction_UManaComponent_Seek, "Seek" }, // 2332697085
		{ &Z_Construct_UFunction_UManaComponent_SeekToPosition, "SeekToPosition" }, // 3177888303
		{ &Z_Construct_UFunction_UManaComponent_SetAlphaTrack, "SetAlphaTrack" }, // 3884844534
		{ &Z_Construct_UFunction_UManaComponent_SetAudioCategory, "SetAudioCategory" }, // 646741241
		{ &Z_Construct_UFunction_UManaComponent_SetAudioTrack, "SetAudioTrack" }, // 3845420844
		{ &Z_Construct_UFunction_UManaComponent_SetEndFrameAction, "SetEndFrameAction" }, // 314964922
		{ &Z_Construct_UFunction_UManaComponent_SetExtraAudioCategory, "SetExtraAudioCategory" }, // 2716342072
		{ &Z_Construct_UFunction_UManaComponent_SetExtraAudioTrack, "SetExtraAudioTrack" }, // 1853627171
		{ &Z_Construct_UFunction_UManaComponent_SetExtraVolume, "SetExtraVolume" }, // 4045064183
		{ &Z_Construct_UFunction_UManaComponent_SetFile, "SetFile" }, // 4223210719
		{ &Z_Construct_UFunction_UManaComponent_SetMaxDropFrames, "SetMaxDropFrames" }, // 3992620114
		{ &Z_Construct_UFunction_UManaComponent_SetMovie, "SetMovie" }, // 2878394348
		{ &Z_Construct_UFunction_UManaComponent_SetPlaybackTimer, "SetPlaybackTimer" }, // 1811702126
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioCategory, "SetSubAudioCategory" }, // 540590200
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioSendLevel, "SetSubAudioSendLevel" }, // 3392430676
		{ &Z_Construct_UFunction_UManaComponent_SetSubAudioTrack, "SetSubAudioTrack" }, // 2030395026
		{ &Z_Construct_UFunction_UManaComponent_SetSubVolume, "SetSubVolume" }, // 2123630382
		{ &Z_Construct_UFunction_UManaComponent_SetTexture, "SetTexture" }, // 925960729
		{ &Z_Construct_UFunction_UManaComponent_SetVolume, "SetVolume" }, // 1056692804
		{ &Z_Construct_UFunction_UManaComponent_Stop, "Stop" }, // 557698917
		{ &Z_Construct_UFunction_UManaComponent_ToIndex, "ToIndex" }, // 3667275928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ManaComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie = { "Movie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, Movie), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint = { "OnEventPoint", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnEventPoint), Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged = { "OnSubtitleChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnSubtitleChanged), Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged = { "OnStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnStatusChanged), Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged = { "OnMovieChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnMovieChanged), Z_Construct_UDelegateFunction_UManaComponent_OnMovieChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted = { "OnSeekCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnSeekCompleted), Z_Construct_UDelegateFunction_UManaComponent_OnSeekCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged = { "OnTrackChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnTrackChanged), Z_Construct_UDelegateFunction_UManaComponent_OnTrackChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime = { "OnFrameOnTime", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnFrameOnTime), Z_Construct_UDelegateFunction_UManaComponent_OnFrameOnTime__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed = { "OnPlayerDestroyed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnPlayerDestroyed), Z_Construct_UDelegateFunction_UManaComponent_OnPlayerDestroyed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData = { "OnRequestData", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, OnRequestData), Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, Playlist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, PlaylistIndex), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UManaComponent*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaComponent), &Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack = { "AlphaTrack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, AlphaTrack), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack = { "AudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, AudioTrack), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack = { "SubAudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, SubAudioTrack), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack = { "ExtraAudioTrack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, ExtraAudioTrack), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName = { "AudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, AudioCategoryName), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName = { "SubAudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, SubAudioCategoryName), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName = { "ExtraAudioCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, ExtraAudioCategoryName), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
	{
		((UManaComponent*)Obj)->bSubtitlesEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled = { "bSubtitlesEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaComponent), &Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel = { "SubtitlesChannel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, SubtitlesChannel), METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding = { "SubtitlesEncoding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, SubtitlesEncoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction = { "EndFrameAction", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer = { "PlaybackTimer", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, PlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponent" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaComponent, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_Movie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnEventPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSubtitleChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMovieChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnSeekCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnTrackChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnFrameOnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnPlayerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnRequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_Playlist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaylistIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AlphaTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AudioCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubAudioCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_ExtraAudioCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_bSubtitlesEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_SubtitlesEncoding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_EndFrameAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_PlaybackTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxFrameDrop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManaComponent_Statics::ClassParams = {
		&UManaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManaComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaComponent, 3127606868);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaComponent>()
	{
		return UManaComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaComponent(Z_Construct_UClass_UManaComponent, &UManaComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
