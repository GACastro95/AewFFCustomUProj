// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGuidHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGuidHUD() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGuidHUD_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGuidHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralFontBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGuidHUD::execGetPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGuidHUD::execSetPlayer)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayer(Z_Param_Player);
		P_NATIVE_END;
	}
	void UELGuidHUD::StaticRegisterNativesUELGuidHUD()
	{
		UClass* Class = UELGuidHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerIndex", &UELGuidHUD::execGetPlayerIndex },
			{ "SetPlayer", &UELGuidHUD::execSetPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics
	{
		struct ELGuidHUD_eventGetPlayerIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGuidHUD_eventGetPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGuidHUD, nullptr, "GetPlayerIndex", nullptr, nullptr, sizeof(ELGuidHUD_eventGetPlayerIndex_Parms), Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics
	{
		struct ELGuidHUD_eventSetPlayer_Parms
		{
			AELCharacter_Native* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGuidHUD_eventSetPlayer_Parms, Player), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGuidHUD, nullptr, "SetPlayer", nullptr, nullptr, sizeof(ELGuidHUD_eventSetPlayer_Parms), Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGuidHUD_SetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGuidHUD_SetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGuidHUD_NoRegister()
	{
		return UELGuidHUD::StaticClass();
	}
	struct Z_Construct_UClass_UELGuidHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[];
#endif
		static void NewProp_bShowHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPosition_MetaData[];
#endif
		static void NewProp_bUseCustomPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGuidHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGuidHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGuidHUD_GetPlayerIndex, "GetPlayerIndex" }, // 2121874637
		{ &Z_Construct_UFunction_UELGuidHUD_SetPlayer, "SetPlayer" }, // 343092208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGuidHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGuidHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGuidHUD" },
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	void Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD_SetBit(void* Obj)
	{
		((UELGuidHUD*)Obj)->bShowHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD = { "bShowHUD", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELGuidHUD), &Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGuidHUD" },
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	void Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition_SetBit(void* Obj)
	{
		((UELGuidHUD*)Obj)->bUseCustomPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition = { "bUseCustomPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELGuidHUD), &Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGuidHUD_Statics::NewProp_OwnerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGuidHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELGuidHUD_Statics::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGuidHUD, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_OwnerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_OwnerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGuidHUD_Statics::NewProp_Font_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGuidHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELGuidHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELGuidHUD_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGuidHUD, Font), Z_Construct_UClass_UELGeneralFontBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGuidHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bShowHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGuidHUD_Statics::NewProp_bUseCustomPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGuidHUD_Statics::NewProp_OwnerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGuidHUD_Statics::NewProp_Font,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGuidHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGuidHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGuidHUD_Statics::ClassParams = {
		&UELGuidHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGuidHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGuidHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGuidHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGuidHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGuidHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGuidHUD, 3257349540);
	template<> ABP_200508_API UClass* StaticClass<UELGuidHUD>()
	{
		return UELGuidHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGuidHUD(Z_Construct_UClass_UELGuidHUD, &UELGuidHUD::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGuidHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGuidHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
