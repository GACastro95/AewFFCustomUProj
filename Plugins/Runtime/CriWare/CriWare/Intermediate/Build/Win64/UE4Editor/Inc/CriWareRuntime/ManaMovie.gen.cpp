// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
// End Cross Module References
	DEFINE_FUNCTION(UManaMovie::execGetAverageBitrate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAverageBitrate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetDisplayDimensions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetDisplayDimensions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetMaxMovieSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMovieSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetMinBufferSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinBufferSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetVideoTrackTextureDimensionsX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVideoTrackTextureDimensionsX(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execGetVideoTrackTextureDimensionsY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVideoTrackTextureDimensionsY(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execIsAlphaMovie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlphaMovie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	void UManaMovie::StaticRegisterNativesUManaMovie()
	{
		UClass* Class = UManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAverageBitrate", &UManaMovie::execGetAverageBitrate },
			{ "GetDisplayDimensions", &UManaMovie::execGetDisplayDimensions },
			{ "GetMaxMovieSecond", &UManaMovie::execGetMaxMovieSecond },
			{ "GetMinBufferSize", &UManaMovie::execGetMinBufferSize },
			{ "GetUrl", &UManaMovie::execGetUrl },
			{ "GetVideoTrackTextureDimensionsX", &UManaMovie::execGetVideoTrackTextureDimensionsX },
			{ "GetVideoTrackTextureDimensionsY", &UManaMovie::execGetVideoTrackTextureDimensionsY },
			{ "IsAlphaMovie", &UManaMovie::execIsAlphaMovie },
			{ "Validate", &UManaMovie::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics
	{
		struct ManaMovie_eventGetAverageBitrate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetAverageBitrate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetAverageBitrate", nullptr, nullptr, sizeof(ManaMovie_eventGetAverageBitrate_Parms), Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetAverageBitrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetAverageBitrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics
	{
		struct ManaMovie_eventGetDisplayDimensions_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetDisplayDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetDisplayDimensions", nullptr, nullptr, sizeof(ManaMovie_eventGetDisplayDimensions_Parms), Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetDisplayDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetDisplayDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics
	{
		struct ManaMovie_eventGetMaxMovieSecond_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetMaxMovieSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetMaxMovieSecond", nullptr, nullptr, sizeof(ManaMovie_eventGetMaxMovieSecond_Parms), Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics
	{
		struct ManaMovie_eventGetMinBufferSize_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetMinBufferSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetMinBufferSize", nullptr, nullptr, sizeof(ManaMovie_eventGetMinBufferSize_Parms), Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetMinBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetMinBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetUrl_Statics
	{
		struct ManaMovie_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaMovie_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetUrl", nullptr, nullptr, sizeof(ManaMovie_eventGetUrl_Parms), Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics
	{
		struct ManaMovie_eventGetVideoTrackTextureDimensionsX_Parms
		{
			int32 TrackIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetVideoTrackTextureDimensionsX_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetVideoTrackTextureDimensionsX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::NewProp_TrackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetVideoTrackTextureDimensionsX", nullptr, nullptr, sizeof(ManaMovie_eventGetVideoTrackTextureDimensionsX_Parms), Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics
	{
		struct ManaMovie_eventGetVideoTrackTextureDimensionsY_Parms
		{
			int32 TrackIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetVideoTrackTextureDimensionsY_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaMovie_eventGetVideoTrackTextureDimensionsY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::NewProp_TrackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetVideoTrackTextureDimensionsY", nullptr, nullptr, sizeof(ManaMovie_eventGetVideoTrackTextureDimensionsY_Parms), Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics
	{
		struct ManaMovie_eventIsAlphaMovie_Parms
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
	void Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaMovie_eventIsAlphaMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaMovie_eventIsAlphaMovie_Parms), &Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "IsAlphaMovie", nullptr, nullptr, sizeof(ManaMovie_eventIsAlphaMovie_Parms), Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_IsAlphaMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_IsAlphaMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_Validate_Statics
	{
		struct ManaMovie_eventValidate_Parms
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
	void Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaMovie_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaMovie_eventValidate_Parms), &Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "Validate", nullptr, nullptr, sizeof(ManaMovie_eventValidate_Parms), Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaMovie_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaMovie_NoRegister()
	{
		return UManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VideoTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlphaTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubtitleChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubtitleChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubtitleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSubtitleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[];
#endif
		static void NewProp_bIsAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaMovie_GetAverageBitrate, "GetAverageBitrate" }, // 2695907352
		{ &Z_Construct_UFunction_UManaMovie_GetDisplayDimensions, "GetDisplayDimensions" }, // 3657295948
		{ &Z_Construct_UFunction_UManaMovie_GetMaxMovieSecond, "GetMaxMovieSecond" }, // 2910087665
		{ &Z_Construct_UFunction_UManaMovie_GetMinBufferSize, "GetMinBufferSize" }, // 4038713749
		{ &Z_Construct_UFunction_UManaMovie_GetUrl, "GetUrl" }, // 363364406
		{ &Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsX, "GetVideoTrackTextureDimensionsX" }, // 4051625605
		{ &Z_Construct_UFunction_UManaMovie_GetVideoTrackTextureDimensionsY, "GetVideoTrackTextureDimensionsY" }, // 2046285729
		{ &Z_Construct_UFunction_UManaMovie_IsAlphaMovie, "IsAlphaMovie" }, // 878632694
		{ &Z_Construct_UFunction_UManaMovie_Validate, "Validate" }, // 685902621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_Inner = { "VideoTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks = { "VideoTracks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, VideoTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_Inner = { "AlphaTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks = { "AlphaTracks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, AlphaTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_Inner = { "AudioTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FManaAudioTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks = { "AudioTracks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, AudioTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_Inner = { "EventPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints = { "EventPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, EventPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels = { "NumSubtitleChannels", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, NumSubtitleChannels), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize = { "MaxSubtitleSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaMovie, MaxSubtitleSize), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	void Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_SetBit(void* Obj)
	{
		((UManaMovie*)Obj)->bIsAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha = { "bIsAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UManaMovie), &Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManaMovie_Statics::ClassParams = {
		&UManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManaMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaMovie, 3834830766);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaMovie>()
	{
		return UManaMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaMovie(Z_Construct_UClass_UManaMovie, &UManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
