// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMovieManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovieManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMovieManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMovieManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	DEFINE_FUNCTION(AELMovieManagerBase::execGetManaMovie)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MoviePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UManaMovie>*)Z_Param__Result=AELMovieManagerBase::GetManaMovie(Z_Param_MoviePath);
		P_NATIVE_END;
	}
	static FName NAME_AELMovieManagerBase_Destroy = FName(TEXT("Destroy"));
	void AELMovieManagerBase::Destroy(int32 MovieSlotID)
	{
		ELMovieManagerBase_eventDestroy_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_Destroy),&Parms);
	}
	static FName NAME_AELMovieManagerBase_DestroyAlpha = FName(TEXT("DestroyAlpha"));
	void AELMovieManagerBase::DestroyAlpha(int32 MovieSlotID)
	{
		ELMovieManagerBase_eventDestroyAlpha_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_DestroyAlpha),&Parms);
	}
	static FName NAME_AELMovieManagerBase_GetStatus = FName(TEXT("GetStatus"));
	void AELMovieManagerBase::GetStatus(bool IsAlphaMovie, int32 MovieSlotID, EManaComponentStatus& Result)
	{
		ELMovieManagerBase_eventGetStatus_Parms Parms;
		Parms.IsAlphaMovie=IsAlphaMovie ? true : false;
		Parms.MovieSlotID=MovieSlotID;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_GetStatus),&Parms);
		Result=Parms.Result;
	}
	static FName NAME_AELMovieManagerBase_Pause = FName(TEXT("Pause"));
	void AELMovieManagerBase::Pause(int32 MovieSlotID, bool StartPause)
	{
		ELMovieManagerBase_eventPause_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		Parms.StartPause=StartPause ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_Pause),&Parms);
	}
	static FName NAME_AELMovieManagerBase_Play = FName(TEXT("Play"));
	void AELMovieManagerBase::Play(int32 MovieSlotID, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, bool IsDebug, float& TotalSecond, float& FadeInSecond, float& FadeOutSecond)
	{
		ELMovieManagerBase_eventPlay_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		Parms.MovieDataIDName=MovieDataIDName;
		Parms.IsMovieLoop=IsMovieLoop ? true : false;
		Parms.IsPlayableWhenPause=IsPlayableWhenPause ? true : false;
		Parms.IsDebug=IsDebug ? true : false;
		Parms.TotalSecond=TotalSecond;
		Parms.FadeInSecond=FadeInSecond;
		Parms.FadeOutSecond=FadeOutSecond;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_Play),&Parms);
		TotalSecond=Parms.TotalSecond;
		FadeInSecond=Parms.FadeInSecond;
		FadeOutSecond=Parms.FadeOutSecond;
	}
	static FName NAME_AELMovieManagerBase_PlayAlpha = FName(TEXT("PlayAlpha"));
	void AELMovieManagerBase::PlayAlpha(int32 MovieSlotID, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, float& TotalSecond, float& FadeInSecond, float& FadeOutSecond)
	{
		ELMovieManagerBase_eventPlayAlpha_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		Parms.MovieDataIDName=MovieDataIDName;
		Parms.IsMovieLoop=IsMovieLoop ? true : false;
		Parms.IsPlayableWhenPause=IsPlayableWhenPause ? true : false;
		Parms.TotalSecond=TotalSecond;
		Parms.FadeInSecond=FadeInSecond;
		Parms.FadeOutSecond=FadeOutSecond;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_PlayAlpha),&Parms);
		TotalSecond=Parms.TotalSecond;
		FadeInSecond=Parms.FadeInSecond;
		FadeOutSecond=Parms.FadeOutSecond;
	}
	static FName NAME_AELMovieManagerBase_PlayMovie = FName(TEXT("PlayMovie"));
	void AELMovieManagerBase::PlayMovie(int32 MovieSlotID, int32 MovieSlotIDAlpha, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, float& TotalSecond, bool& IsAlpha, float& FadeInSecond, float& FadeOutSecond)
	{
		ELMovieManagerBase_eventPlayMovie_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		Parms.MovieSlotIDAlpha=MovieSlotIDAlpha;
		Parms.MovieDataIDName=MovieDataIDName;
		Parms.IsMovieLoop=IsMovieLoop ? true : false;
		Parms.IsPlayableWhenPause=IsPlayableWhenPause ? true : false;
		Parms.TotalSecond=TotalSecond;
		Parms.IsAlpha=IsAlpha ? true : false;
		Parms.FadeInSecond=FadeInSecond;
		Parms.FadeOutSecond=FadeOutSecond;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_PlayMovie),&Parms);
		TotalSecond=Parms.TotalSecond;
		IsAlpha=Parms.IsAlpha;
		FadeInSecond=Parms.FadeInSecond;
		FadeOutSecond=Parms.FadeOutSecond;
	}
	static FName NAME_AELMovieManagerBase_Seek = FName(TEXT("Seek"));
	void AELMovieManagerBase::Seek(int32 MovieSlotID, FTimespan AddTime, FName MovieDataIDName, bool IsDebug)
	{
		ELMovieManagerBase_eventSeek_Parms Parms;
		Parms.MovieSlotID=MovieSlotID;
		Parms.AddTime=AddTime;
		Parms.MovieDataIDName=MovieDataIDName;
		Parms.IsDebug=IsDebug ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELMovieManagerBase_Seek),&Parms);
	}
	void AELMovieManagerBase::StaticRegisterNativesAELMovieManagerBase()
	{
		UClass* Class = AELMovieManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetManaMovie", &AELMovieManagerBase::execGetManaMovie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventDestroy_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::NewProp_MovieSlotID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "Destroy", nullptr, nullptr, sizeof(ELMovieManagerBase_eventDestroy_Parms), Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventDestroyAlpha_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::NewProp_MovieSlotID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "DestroyAlpha", nullptr, nullptr, sizeof(ELMovieManagerBase_eventDestroyAlpha_Parms), Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics
	{
		struct ELMovieManagerBase_eventGetManaMovie_Parms
		{
			FString MoviePath;
			TSoftObjectPtr<UManaMovie> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePath;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_MoviePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventGetManaMovie_Parms, MoviePath), METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_MoviePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_MoviePath_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventGetManaMovie_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "GetManaMovie", nullptr, nullptr, sizeof(ELMovieManagerBase_eventGetManaMovie_Parms), Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics
	{
		static void NewProp_IsAlphaMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlphaMovie;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_IsAlphaMovie_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventGetStatus_Parms*)Obj)->IsAlphaMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_IsAlphaMovie = { "IsAlphaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventGetStatus_Parms), &Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_IsAlphaMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventGetStatus_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventGetStatus_Parms, Result), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_IsAlphaMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "GetStatus", nullptr, nullptr, sizeof(ELMovieManagerBase_eventGetStatus_Parms), Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static void NewProp_StartPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPause_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_StartPause_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPause_Parms*)Obj)->StartPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_StartPause = { "StartPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPause_Parms), &Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_StartPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::NewProp_StartPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "Pause", nullptr, nullptr, sizeof(ELMovieManagerBase_eventPause_Parms), Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_Play_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataIDName;
		static void NewProp_IsMovieLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMovieLoop;
		static void NewProp_IsPlayableWhenPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayableWhenPause;
		static void NewProp_IsDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDebug;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlay_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_MovieDataIDName = { "MovieDataIDName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlay_Parms, MovieDataIDName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsMovieLoop_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlay_Parms*)Obj)->IsMovieLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsMovieLoop = { "IsMovieLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlay_Parms), &Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsMovieLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsPlayableWhenPause_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlay_Parms*)Obj)->IsPlayableWhenPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsPlayableWhenPause = { "IsPlayableWhenPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlay_Parms), &Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsPlayableWhenPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsDebug_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlay_Parms*)Obj)->IsDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsDebug = { "IsDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlay_Parms), &Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_TotalSecond = { "TotalSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlay_Parms, TotalSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_FadeInSecond = { "FadeInSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlay_Parms, FadeInSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_FadeOutSecond = { "FadeOutSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlay_Parms, FadeOutSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_MovieDataIDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsMovieLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsPlayableWhenPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_IsDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_TotalSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_FadeInSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::NewProp_FadeOutSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "Play", nullptr, nullptr, sizeof(ELMovieManagerBase_eventPlay_Parms), Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataIDName;
		static void NewProp_IsMovieLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMovieLoop;
		static void NewProp_IsPlayableWhenPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayableWhenPause;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayAlpha_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_MovieDataIDName = { "MovieDataIDName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayAlpha_Parms, MovieDataIDName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsMovieLoop_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlayAlpha_Parms*)Obj)->IsMovieLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsMovieLoop = { "IsMovieLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlayAlpha_Parms), &Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsMovieLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsPlayableWhenPause_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlayAlpha_Parms*)Obj)->IsPlayableWhenPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsPlayableWhenPause = { "IsPlayableWhenPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlayAlpha_Parms), &Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsPlayableWhenPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_TotalSecond = { "TotalSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayAlpha_Parms, TotalSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_FadeInSecond = { "FadeInSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayAlpha_Parms, FadeInSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_FadeOutSecond = { "FadeOutSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayAlpha_Parms, FadeOutSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_MovieDataIDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsMovieLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_IsPlayableWhenPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_TotalSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_FadeInSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::NewProp_FadeOutSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "PlayAlpha", nullptr, nullptr, sizeof(ELMovieManagerBase_eventPlayAlpha_Parms), Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotIDAlpha;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataIDName;
		static void NewProp_IsMovieLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMovieLoop;
		static void NewProp_IsPlayableWhenPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayableWhenPause;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalSecond;
		static void NewProp_IsAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlpha;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieSlotIDAlpha = { "MovieSlotIDAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, MovieSlotIDAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieDataIDName = { "MovieDataIDName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, MovieDataIDName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsMovieLoop_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlayMovie_Parms*)Obj)->IsMovieLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsMovieLoop = { "IsMovieLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlayMovie_Parms), &Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsMovieLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsPlayableWhenPause_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlayMovie_Parms*)Obj)->IsPlayableWhenPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsPlayableWhenPause = { "IsPlayableWhenPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlayMovie_Parms), &Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsPlayableWhenPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_TotalSecond = { "TotalSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, TotalSecond), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsAlpha_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventPlayMovie_Parms*)Obj)->IsAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsAlpha = { "IsAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventPlayMovie_Parms), &Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_FadeInSecond = { "FadeInSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, FadeInSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_FadeOutSecond = { "FadeOutSecond", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventPlayMovie_Parms, FadeOutSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieSlotIDAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_MovieDataIDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsMovieLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsPlayableWhenPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_TotalSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_IsAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_FadeInSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::NewProp_FadeOutSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "PlayMovie", nullptr, nullptr, sizeof(ELMovieManagerBase_eventPlayMovie_Parms), Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_PlayMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_PlayMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataIDName;
		static void NewProp_IsDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventSeek_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_AddTime = { "AddTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventSeek_Parms, AddTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_MovieDataIDName = { "MovieDataIDName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieManagerBase_eventSeek_Parms, MovieDataIDName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_IsDebug_SetBit(void* Obj)
	{
		((ELMovieManagerBase_eventSeek_Parms*)Obj)->IsDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_IsDebug = { "IsDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieManagerBase_eventSeek_Parms), &Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_IsDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_AddTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_MovieDataIDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::NewProp_IsDebug,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovieManagerBase, nullptr, "Seek", nullptr, nullptr, sizeof(ELMovieManagerBase_eventSeek_Parms), Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovieManagerBase_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovieManagerBase_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMovieManagerBase_NoRegister()
	{
		return AELMovieManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMovieManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMovieManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMovieManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMovieManagerBase_Destroy, "Destroy" }, // 1939033420
		{ &Z_Construct_UFunction_AELMovieManagerBase_DestroyAlpha, "DestroyAlpha" }, // 3142778815
		{ &Z_Construct_UFunction_AELMovieManagerBase_GetManaMovie, "GetManaMovie" }, // 1357255255
		{ &Z_Construct_UFunction_AELMovieManagerBase_GetStatus, "GetStatus" }, // 2211447264
		{ &Z_Construct_UFunction_AELMovieManagerBase_Pause, "Pause" }, // 2794758131
		{ &Z_Construct_UFunction_AELMovieManagerBase_Play, "Play" }, // 2026532751
		{ &Z_Construct_UFunction_AELMovieManagerBase_PlayAlpha, "PlayAlpha" }, // 4216757532
		{ &Z_Construct_UFunction_AELMovieManagerBase_PlayMovie, "PlayMovie" }, // 4173361318
		{ &Z_Construct_UFunction_AELMovieManagerBase_Seek, "Seek" }, // 3473819313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovieManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMovieManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovieManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMovieManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMovieManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMovieManagerBase_Statics::ClassParams = {
		&AELMovieManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMovieManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovieManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMovieManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMovieManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMovieManagerBase, 3630640916);
	template<> ABP_200508_API UClass* StaticClass<AELMovieManagerBase>()
	{
		return AELMovieManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMovieManagerBase(Z_Construct_UClass_AELMovieManagerBase, &AELMovieManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMovieManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMovieManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
