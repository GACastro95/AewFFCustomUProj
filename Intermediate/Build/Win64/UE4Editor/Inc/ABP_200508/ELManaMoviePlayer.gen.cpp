// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELManaMoviePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELManaMoviePlayer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELManaMoviePlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELManaMoviePlayer();
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELManaMoviePlayer::execChangeMovieResourceForManaMovie)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeMovieResourceForManaMovie(Z_Param_ManaMovie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execGetManaPlayer)
	{
		P_GET_OBJECT_REF(UManaPlayer,Z_Param_Out_ManaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetManaPlayer(Z_Param_Out_ManaPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execGetManaTexture)
	{
		P_GET_OBJECT_REF(UManaTexture,Z_Param_Out_ManaTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetManaTexture(Z_Param_Out_ManaTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnMovieClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnMovieOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieOpened(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnMovieOpenFailed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovieOpenFailed(Z_Param_OpenedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnPlaybackResumed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackResumed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnPlaybackSuspended)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackSuspended();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnSeekCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeekCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execOnTracksChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTracksChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELManaMoviePlayer::execResourceExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MoviePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELManaMoviePlayer::ResourceExist(Z_Param_MoviePath);
		P_NATIVE_END;
	}
	void UELManaMoviePlayer::StaticRegisterNativesUELManaMoviePlayer()
	{
		UClass* Class = UELManaMoviePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMovieResourceForManaMovie", &UELManaMoviePlayer::execChangeMovieResourceForManaMovie },
			{ "GetManaPlayer", &UELManaMoviePlayer::execGetManaPlayer },
			{ "GetManaTexture", &UELManaMoviePlayer::execGetManaTexture },
			{ "OnEndReached", &UELManaMoviePlayer::execOnEndReached },
			{ "OnMovieClosed", &UELManaMoviePlayer::execOnMovieClosed },
			{ "OnMovieOpened", &UELManaMoviePlayer::execOnMovieOpened },
			{ "OnMovieOpenFailed", &UELManaMoviePlayer::execOnMovieOpenFailed },
			{ "OnPlaybackResumed", &UELManaMoviePlayer::execOnPlaybackResumed },
			{ "OnPlaybackSuspended", &UELManaMoviePlayer::execOnPlaybackSuspended },
			{ "OnSeekCompleted", &UELManaMoviePlayer::execOnSeekCompleted },
			{ "OnTracksChanged", &UELManaMoviePlayer::execOnTracksChanged },
			{ "ResourceExist", &UELManaMoviePlayer::execResourceExist },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics
	{
		struct ELManaMoviePlayer_eventChangeMovieResourceForManaMovie_Parms
		{
			UManaMovie* ManaMovie;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventChangeMovieResourceForManaMovie_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELManaMoviePlayer_eventChangeMovieResourceForManaMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELManaMoviePlayer_eventChangeMovieResourceForManaMovie_Parms), &Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ManaMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "ChangeMovieResourceForManaMovie", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventChangeMovieResourceForManaMovie_Parms), Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics
	{
		struct ELManaMoviePlayer_eventGetManaPlayer_Parms
		{
			UManaPlayer* ManaPlayer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventGetManaPlayer_Parms, ManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELManaMoviePlayer_eventGetManaPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELManaMoviePlayer_eventGetManaPlayer_Parms), &Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ManaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "GetManaPlayer", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventGetManaPlayer_Parms), Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics
	{
		struct ELManaMoviePlayer_eventGetManaTexture_Parms
		{
			UManaTexture* ManaTexture;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventGetManaTexture_Parms, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELManaMoviePlayer_eventGetManaTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELManaMoviePlayer_eventGetManaTexture_Parms), &Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ManaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "GetManaTexture", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventGetManaTexture_Parms), Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnMovieClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics
	{
		struct ELManaMoviePlayer_eventOnMovieOpened_Parms
		{
			FString OpenedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventOnMovieOpened_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnMovieOpened", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventOnMovieOpened_Parms), Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics
	{
		struct ELManaMoviePlayer_eventOnMovieOpenFailed_Parms
		{
			FString OpenedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::NewProp_OpenedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventOnMovieOpenFailed_Parms, OpenedUrl), METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::NewProp_OpenedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::NewProp_OpenedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnMovieOpenFailed", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventOnMovieOpenFailed_Parms), Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnPlaybackResumed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnPlaybackSuspended", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnSeekCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "OnTracksChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics
	{
		struct ELManaMoviePlayer_eventResourceExist_Parms
		{
			FString MoviePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_MoviePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELManaMoviePlayer_eventResourceExist_Parms, MoviePath), METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_MoviePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_MoviePath_MetaData)) };
	void Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELManaMoviePlayer_eventResourceExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELManaMoviePlayer_eventResourceExist_Parms), &Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELManaMoviePlayer, nullptr, "ResourceExist", nullptr, nullptr, sizeof(ELManaMoviePlayer_eventResourceExist_Parms), Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELManaMoviePlayer_NoRegister()
	{
		return UELManaMoviePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UELManaMoviePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pManaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pManaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pManaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_m_pManaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pManaMovie_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_m_pManaMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELManaMoviePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMoviePlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELManaMoviePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELManaMoviePlayer_ChangeMovieResourceForManaMovie, "ChangeMovieResourceForManaMovie" }, // 4046651292
		{ &Z_Construct_UFunction_UELManaMoviePlayer_GetManaPlayer, "GetManaPlayer" }, // 3758256524
		{ &Z_Construct_UFunction_UELManaMoviePlayer_GetManaTexture, "GetManaTexture" }, // 681342080
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnEndReached, "OnEndReached" }, // 1665581900
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnMovieClosed, "OnMovieClosed" }, // 3853480482
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpened, "OnMovieOpened" }, // 2911432308
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnMovieOpenFailed, "OnMovieOpenFailed" }, // 2514416431
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackResumed, "OnPlaybackResumed" }, // 1293514081
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnPlaybackSuspended, "OnPlaybackSuspended" }, // 1217780680
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnSeekCompleted, "OnSeekCompleted" }, // 193324932
		{ &Z_Construct_UFunction_UELManaMoviePlayer_OnTracksChanged, "OnTracksChanged" }, // 412791075
		{ &Z_Construct_UFunction_UELManaMoviePlayer_ResourceExist, "ResourceExist" }, // 2588862345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELManaMoviePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELManaMoviePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELManaMoviePlayer" },
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaPlayer = { "m_pManaPlayer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELManaMoviePlayer, m_pManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELManaMoviePlayer" },
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaTexture = { "m_pManaTexture", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELManaMoviePlayer, m_pManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELManaMoviePlayer" },
		{ "ModuleRelativePath", "Public/ELManaMoviePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaMovie = { "m_pManaMovie", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELManaMoviePlayer, m_pManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaMovie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELManaMoviePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELManaMoviePlayer_Statics::NewProp_m_pManaMovie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELManaMoviePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELManaMoviePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELManaMoviePlayer_Statics::ClassParams = {
		&UELManaMoviePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELManaMoviePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELManaMoviePlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELManaMoviePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELManaMoviePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELManaMoviePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELManaMoviePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELManaMoviePlayer, 3106041599);
	template<> ABP_200508_API UClass* StaticClass<UELManaMoviePlayer>()
	{
		return UELManaMoviePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELManaMoviePlayer(Z_Construct_UClass_UELManaMoviePlayer, &UELManaMoviePlayer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELManaMoviePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELManaMoviePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
