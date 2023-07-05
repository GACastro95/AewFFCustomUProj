// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLocalPlayer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalPlayer();
	ABP_200508_API UClass* Z_Construct_UClass_UELOSSLocalPlayer();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELLocalPlayer::execLogin)
	{
		P_GET_OBJECT(UELEOSManager,Z_Param_ELEOSManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Login(Z_Param_ELEOSManager);
		P_NATIVE_END;
	}
	void UELLocalPlayer::StaticRegisterNativesUELLocalPlayer()
	{
		UClass* Class = UELLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Login", &UELLocalPlayer::execLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLocalPlayer_Login_Statics
	{
		struct ELLocalPlayer_eventLogin_Parms
		{
			UELEOSManager* ELEOSManager;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSManager;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ELEOSManager = { "ELEOSManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalPlayer_eventLogin_Parms, ELEOSManager), Z_Construct_UClass_UELEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLocalPlayer_eventLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLocalPlayer_eventLogin_Parms), &Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLocalPlayer_Login_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ELEOSManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalPlayer_Login_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLocalPlayer_Login_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLocalPlayer_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLocalPlayer, nullptr, "Login", nullptr, nullptr, sizeof(ELLocalPlayer_eventLogin_Parms), Z_Construct_UFunction_UELLocalPlayer_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalPlayer_Login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLocalPlayer_Login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalPlayer_Login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLocalPlayer_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLocalPlayer_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLocalPlayer_NoRegister()
	{
		return UELLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UELLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELOSSLocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLocalPlayer_Login, "Login" }, // 3842293582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLocalPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLocalPlayer_Statics::ClassParams = {
		&UELLocalPlayer::StaticClass,
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
		0x008000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UELLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLocalPlayer, 3049145090);
	template<> ABP_200508_API UClass* StaticClass<UELLocalPlayer>()
	{
		return UELLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLocalPlayer(Z_Construct_UClass_UELLocalPlayer, &UELLocalPlayer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
